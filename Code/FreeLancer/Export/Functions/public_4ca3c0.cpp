#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_4ca3c0);

#define public_4ca3e0 _public_4ca3e0
#define public_4ca405 _public_4ca405
#define public_4ca44d _public_4ca44d
#define public_4ca460 _public_4ca460
#define public_4ca473 _public_4ca473
#define public_4ca477 _public_4ca477

PROC_DECLARE(0x4ca3c0, internal_4ca3c0, public_4ca3c0);
extern "C" NAKED register_t __cdecl internal_4ca3c0()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        test ecx, ecx
        push edi
        mov dword ptr ss : [esp+0xC], eax
        je public_4ca477
        xor edi, edi
        test ecx, ecx
        jle public_4ca405
        xor ebx, ebx
        public_4ca3e0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+ebx+4]
        mov edx, dword ptr ds : [ecx+4]
        push 0xFFFFFFFF
        push 1
        push edx
        call public_41aa50
        add esp, 0xC
        mov dword ptr ss : [esp+edi*4+0x10], eax
        mov eax, dword ptr ds : [esi]
        inc edi
        add ebx, 0x18
        cmp edi, eax
        jl public_4ca3e0
        public_4ca405 : nop
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_4ca44d
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0xD5
/*FIXUP push offset public_5d7188 @0x4ca430*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7188
        mov eax, 0x100002
/*FIXUP push offset public_5d71a0 @0x4ca43a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d71a0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov dword ptr ss : [esp+0xC], 0
        public_4ca44d : nop
        mov eax, dword ptr ds : [esi]
        xor edi, edi
        test eax, eax
        jle public_4ca473
        lea ebx, ss:[esp+0x10]
        lea esp, ss:[esp]
        public_4ca460 : nop
        push ebx
        call public_41b030
        mov eax, dword ptr ds : [esi]
        add esp, 4
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_4ca460
        public_4ca473 : nop
        mov eax, dword ptr ss : [esp+0xC]
        public_4ca477 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x4ca3c0)
    }
}

#undef public_4ca3e0
#undef public_4ca405
#undef public_4ca44d
#undef public_4ca460
#undef public_4ca473
#undef public_4ca477
