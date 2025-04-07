#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6333ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6333f30);

#define public_6333d07 _public_6333d07
#define public_6333d0c _public_6333d0c
#define public_6333d14 _public_6333d14
#define public_6333d22 _public_6333d22
#define public_6333d48 _public_6333d48
#define public_6333d7f _public_6333d7f
#define public_6333d81 _public_6333d81
#define public_6333dd7 _public_6333dd7
#define public_6333de3 _public_6333de3

PROC_DECLARE(0x6333ca0, internal_6333ca0, public_6333ca0);
extern "C" NAKED register_t __cdecl internal_6333ca0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        push edi
        je public_6333d07
        cmp byte ptr ds : [esi], 0
        je public_6333d07
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_6333d48
        mov ebx, dword ptr ds : [public_63edb70]
        mov ebp, dword ptr ds : [public_63edb6c]
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ebx
        sub eax, ebp
        lea edx, ds:[ecx+1]
        cmp edx, eax
        jbe public_6333d14
        push 0x600
        push 0xB9
/*FIXUP push offset public_63a4a78 @0x6333ced*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4a78
        mov eax, 0x100001
/*FIXUP push offset public_63a4a44 @0x6333cf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4a44
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6333d07 : nop
        mov eax, offset public_640a810
        public_6333d0c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_6333d14 : nop
        sub ebx, ecx
        lea eax, ds : [ebx+public_640a80f]
        mov edi, eax
        mov ecx, esi
        sub edi, esi
        public_6333d22 : nop
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [edi+ecx], dl
        inc ecx
        test dl, dl
        jne public_6333d22
        mov ecx, dword ptr ds : [public_658a810]
        pop edi
        dec ebx
        pop esi
        inc ecx
        pop ebp
        mov dword ptr ds : [public_63edb70], ebx
        mov dword ptr ds : [public_658a810], ecx
        pop ebx
        add esp, 0x10
        ret 
        public_6333d48 : nop
        mov ecx, offset public_640a800
        call public_6333bb0
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ds : [public_658a814]
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x30], esi
        call public_6333ea0
        mov ebp, dword ptr ds : [public_658a814]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ss : [ebp+4]
        je public_6333d7f
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_6333d81
        public_6333d7f : nop
        xor eax, eax
        public_6333d81 : nop
        test eax, eax
        jne public_6333d0c
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        mov eax, dword ptr ds : [public_63edb70]
        mov edi, dword ptr ds : [public_63edb6c]
        not ecx
        dec ecx
        mov ebx, ecx
        sub eax, edi
        lea ecx, ds:[ebx+1]
        cmp ecx, eax
        jbe public_6333dd7
        mov edx, dword ptr ds : [public_6399028]
        push 0x600
        push 0xA9
/*FIXUP push offset public_63a4a78 @0x6333db5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4a78
        mov eax, 0x100001
/*FIXUP push offset public_63a4a44 @0x6333dbf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4a44
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        mov eax, offset public_640a810
        pop ebx
        add esp, 0x10
        ret 
        public_6333dd7 : nop
        lea edi, ds : [edi+public_640a810]
        mov edx, edi
        mov eax, esi
        sub edx, esi
        public_6333de3 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6333de3
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], 0
        call public_6333f30
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+0x10], edi
        mov eax, dword ptr ds : [public_63edb6c]
        lea ecx, ds:[eax+ebx+1]
        inc dword ptr ds : [public_63edb74]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [public_63edb6c], ecx
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6333ca0)
    }
}

#undef public_6333d07
#undef public_6333d0c
#undef public_6333d14
#undef public_6333d22
#undef public_6333d48
#undef public_6333d7f
#undef public_6333d81
#undef public_6333dd7
#undef public_6333de3
