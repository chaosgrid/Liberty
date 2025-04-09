#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_41acf0);
CLANG_FORWARD_PROC_SYMBOL(public_41ad30);
CLANG_FORWARD_PROC_SYMBOL(public_41b380);
CLANG_FORWARD_PROC_SYMBOL(public_41b590);
CLANG_FORWARD_PROC_SYMBOL(public_41ba10);
CLANG_FORWARD_PROC_SYMBOL(public_41bde0);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_JUMP_SYMBOL(public_5b89f8);

#define public_41aaed _public_41aaed
#define public_41ab89 _public_41ab89
#define public_41abbe _public_41abbe
#define public_41abd2 _public_41abd2
#define public_41abe8 _public_41abe8
#define public_41ac60 _public_41ac60
#define public_41ac86 _public_41ac86
#define public_41acc4 _public_41acc4
#define public_41acd8 _public_41acd8
#define public_41acda _public_41acda

PROC_DECLARE(0x41aa50, internal_41aa50, public_41aa50);
extern "C" NAKED register_t __cdecl internal_41aa50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b89f8 @0x41aa58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b89f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x80]
        xor ebx, ebx
        xor eax, eax
        cmp ebp, ebx
        push esi
        je public_41acda
        cmp byte ptr ss : [ebp], 0
        je public_41acda
/*FIXUP push offset public_6166ec @0x41aa88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6f70]
        push ebp
        lea ecx, ss:[esp+0x2C]
        call public_41acf0
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, offset public_6166d8
        call public_41b380
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_46d660
/*FIXUP push offset public_6166ec @0x41aac4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6ee8]
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        mov ecx, dword ptr ss : [esp+0x18]
        lea esi, ds:[ecx+0xC]
        jne public_41aaed
        inc dword ptr ds : [esi+0x14]
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_41ac86
        public_41aaed : nop
        push edi
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x48], offset public_5c7388
        rep stosd
        mov dword ptr ss : [esp+0x54], 0x80000000
        mov dword ptr ss : [esp+0x58], 1
        mov dword ptr ss : [esp+0x60], 3
        mov dword ptr ss : [esp+0x64], 0x8000080
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x44], 0x34
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x88], ebx
        mov edx, dword ptr ds : [public_5c6dd8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x88]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        mov dword ptr ss : [esp+0x8C], ebx
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jge public_41ab89
        push ebp
        push 0x10A
/*FIXUP push offset public_5c92c4 @0x41ab6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c92c4
        mov eax, 0x100001
/*FIXUP push offset public_5c9280 @0x41ab74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9280
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_41ac60
        public_41ab89 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        mov edi, dword ptr ss : [esp+0x88]
        push ecx
        push edi
        mov ecx, esi
        call public_41ad30
        mov edx, dword ptr ds : [public_5c6d38]
        mov bl, al
        mov eax, dword ptr ds : [edx]
        or ebp, 0xFFFFFFFF
        test eax, eax
        je public_41abbe
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+8]
        push edx
        push edi
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ebp, eax
        public_41abbe : nop
        mov eax, dword ptr ds : [public_5c6d7c]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_41abd2
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0x10], eax
        public_41abd2 : nop
        mov eax, dword ptr ds : [public_5c6d84]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_41abe8
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push edi
        call dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0xC], eax
        public_41abe8 : nop
        test bl, bl
        jne public_41ac60
        test ebp, ebp
        jge public_41ac60
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_41ac60
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_41ac60
/*FIXUP push offset public_6166ec @0x41abfe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6f70]
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6166d8
        call public_41ba10
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x90]
        push ecx
        push edx
        xor esi, esi
        push eax
        mov dword ptr ss : [esp+0x9C], esi
        call public_41bde0
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6166d8
        call public_41b590
/*FIXUP push offset public_6166ec @0x41ac55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6ee8]
        public_41ac60 : nop
        mov eax, dword ptr ss : [esp+0x88]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        pop edi
        je public_41ac86
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x84], ebx
        public_41ac86 : nop
        cmp esi, ebx
        je public_41acd8
        mov al, byte ptr ss : [esp+0x88]
        test al, al
        je public_41acc4
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, 0xFFFFFFFF
        je public_41acc4
        mov edx, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push 0x3F800000
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [public_5c6d38]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        public_41acc4 : nop
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        public_41acd8 : nop
        xor eax, eax
        public_41acda : nop
        mov ecx, dword ptr ss : [esp+0x74]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x41aa50)
    }
}

#undef public_41aaed
#undef public_41ab89
#undef public_41abbe
#undef public_41abd2
#undef public_41abe8
#undef public_41ac60
#undef public_41ac86
#undef public_41acc4
#undef public_41acd8
#undef public_41acda
