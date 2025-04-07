#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf63f0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc370);
CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a880);
CLANG_FORWARD_PROC_SYMBOL(public_6d43820);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c600);
CLANG_FORWARD_PROC_SYMBOL(public_6d5f990);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60b4b);

#define public_6cf7cf6 _public_6cf7cf6
#define public_6cf7dd0 _public_6cf7dd0
#define public_6cf7de1 _public_6cf7de1
#define public_6cf7e49 _public_6cf7e49
#define public_6cf7f44 _public_6cf7f44
#define public_6cf7fec _public_6cf7fec
#define public_6cf7ff4 _public_6cf7ff4
#define public_6cf80af _public_6cf80af

PROC_DECLARE(0x6cf7c90, internal_6cf7c90, public_6cf7c90);
extern "C" NAKED register_t __cdecl internal_6cf7c90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60b4b @0x6cf7c92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60b4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x114
        push ebx
        call dword ptr ds : [public_6d642ec]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6cf7cf6
/*FIXUP push offset public_6d66b48 @0x6cf7cbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66b48
        push 0x3F
/*FIXUP push offset public_6d66b18 @0x6cf7cc3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66b18
        mov eax, 0x100001
/*FIXUP push offset public_6d655d8 @0x6cf7ccd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d655d8
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop ebx
        mov ecx, dword ptr ss : [esp+0x114]
        mov dword ptr fs : [0], ecx
        add esp, 0x120
        ret 
        public_6cf7cf6 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x130]
        mov ecx, dword ptr ds : [esi+4]
        push edi
        or edi, 0xFFFFFFFF
        push ecx
        mov dword ptr ss : [esp+0x10], edi
        call public_6d00280
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6cf80af
        push ebp
        lea ecx, ss:[esp+0x38]
        call public_6cf63f0
        mov dword ptr ss : [esp+0xE4], ebx
        mov dword ptr ss : [esp+0xE8], ebx
        mov dword ptr ss : [esp+0xEC], ebx
        mov dword ptr ss : [esp+0x108], 0
        mov dword ptr ss : [esp+0x10C], edi
        mov dword ptr ss : [esp+0x110], ebx
        mov byte ptr ss : [esp+0x114], bl
        mov dword ptr ss : [esp+0x38], offset public_6d65f78
        mov ebp, dword ptr ds : [public_6d643c4]
        lea ecx, ss:[esp+0x118]
        mov dword ptr ss : [esp+0x12C], ebx
        call ebp
        mov dword ptr ss : [esp+0x11C], ebx
        mov dword ptr ss : [esp+0x120], ebx
        mov ecx, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [esi+0x70]
        lea eax, ds:[esi+0x70]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [esp+0x54], edx
        xor edx, edx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x12C], 1
        mov dword ptr ss : [esp+0x7C], ecx
        jle public_6cf7de1
        lea edi, ss:[esp+0x4C]
        lea ecx, ss:[esp+0x5C]
        sub eax, edi
        lea ebx, ds:[ebx]
        public_6cf7dd0 : nop
        mov edi, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ss : [esp+0x7C]
        inc edx
        add ecx, 4
        cmp edx, edi
        jl public_6cf7dd0
        public_6cf7de1 : nop
        mov edx, dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [esi+0xBC]
        mov eax, dword ptr ds : [esi+0xA4]
        mov dword ptr ss : [esp+0xEC], ecx
        mov dword ptr ss : [esp+0x80], edx
        mov edx, dword ptr ds : [esi+0x54]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0xE8], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ds : [public_6d8d868]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x84], edx
        mov dword ptr ss : [esp+0x8C], ecx
        jne public_6cf7e49
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d868], eax
        public_6cf7e49 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x30]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x50]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x94], eax
        mov dword ptr ss : [esp+0x90], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x98], ecx
        mov dword ptr ss : [esp+0x9C], edx
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xF0], ecx
        mov dword ptr ss : [esp+0xF4], edx
        lea ecx, ds:[esi+0x18]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xF8], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x100], eax
        mov eax, dword ptr ds : [esi+0xAC]
        mov dword ptr ss : [esp+0xFC], edx
        mov edx, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x104], ecx
        mov ecx, dword ptr ds : [esi+0xB0]
        mov dword ptr ss : [esp+0xA4], edx
        mov edx, dword ptr ds : [esi+0xB8]
        push eax
        mov dword ptr ss : [esp+0x10C], 0
        mov dword ptr ss : [esp+0xE8], ebx
        mov dword ptr ss : [esp+0xA4], ecx
        mov dword ptr ss : [esp+0x124], edx
        call dword ptr ds : [public_6d643c0]
        add esp, 4
        lea ecx, ss:[esp+0xB8]
        mov edi, eax
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d644a0]
        lea ecx, ss:[esp+0x1C]
        call ebp
        mov eax, dword ptr ds : [esi+0x58]
        cmp eax, ebx
        pop ebp
        je public_6cf7f44
        push eax
        call dword ptr ds : [public_6d6449c]
        mov dx, word ptr ds : [eax+0x14]
        add esp, 4
        mov word ptr ss : [esp+0x18], dx
        public_6cf7f44 : nop
        lea eax, ss:[esp+0xA4]
        push eax
        lea ecx, ds:[esi+0x5C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        call public_6d5f990
        mov ax, word ptr ss : [esp+0x28]
        push esi
        mov word ptr ss : [esp+0x128], ax
        call public_6d43820
        add esp, 0x14
        test al, al
        je public_6cf7fec
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, ecx
        and eax, 0x3FFFFFFF
        inc ecx
        mov dword ptr ds : [edx+4], ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x3C], eax
        call public_6d0a880
        mov eax, dword ptr ss : [esp+0x38]
        test eax, 0x3FFFFFFF
        je public_6cf7ff4
        mov ecx, dword ptr ss : [esp+0x130]
        push ecx
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        mov ecx, offset public_6d8d834
        call public_6cfc370
        mov eax, dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_6d8d820
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6d5c600
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+0x10], eax
        jmp public_6cf7ff4
        public_6cf7fec : nop
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFC
        public_6cf7ff4 : nop
        mov dword ptr ss : [esp+0x34], offset public_6d65f68
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0xC4]
        mov dword ptr ss : [esp+0x12C], 3
        call dword ptr ds : [public_6d64398]
        mov ecx, dword ptr ss : [esp+0xC4]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0xCC]
        call dword ptr ds : [public_6d64394]
        mov ecx, dword ptr ss : [esp+0xC4]
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0xBC]
        add esp, 4
        mov dword ptr ss : [esp+0xC4], ebx
        mov dword ptr ss : [esp+0xC8], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0xC0]
        mov byte ptr ss : [esp+0x134], 2
        call dword ptr ds : [public_6d643a8]
        mov eax, dword ptr ss : [esp+0xB8]
        push eax
        call public_6d5ffb0
        add esp, 4
        lea ecx, ss:[esp+0xA4]
        mov dword ptr ss : [esp+0xB8], ebx
        mov dword ptr ss : [esp+0xBC], ebx
        mov dword ptr ss : [esp+0x128], 0xFFFFFFFF
        call dword ptr ds : [public_6d64498]
        public_6cf80af : nop
        mov ecx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x120
        ret 
        UNREACHABLE_TRAP(0x6cf7c90)
    }
}

#undef public_6cf7cf6
#undef public_6cf7dd0
#undef public_6cf7de1
#undef public_6cf7e49
#undef public_6cf7f44
#undef public_6cf7fec
#undef public_6cf7ff4
#undef public_6cf80af
