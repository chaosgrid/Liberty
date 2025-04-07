#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ca80);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cc90);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f2ccb1 _public_6f2ccb1
#define public_6f2cd14 _public_6f2cd14
#define public_6f2cd20 _public_6f2cd20
#define public_6f2cd55 _public_6f2cd55
#define public_6f2cd77 _public_6f2cd77

PROC_DECLARE(0x6f2cc90, internal_6f2cc90, public_6f2cc90);
extern "C" NAKED register_t __cdecl internal_6f2cc90()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], 0
        jne public_6f2ccb1
        mov dword ptr ss : [esp+0x20], offset public_6f5ec4c
        public_6f2ccb1 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov edi, dword ptr ss : [esp+0x20]
        not ecx
        dec ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        lea ebp, ds:[edx+ecx+2]
        push ebp
        call public_6f57e9c
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_6f5a06c]
        mov edx, dword ptr ds : [esi+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0x10
        mov edi, ebx
        repne scasb
        mov eax, dword ptr ds : [esi+8]
        not ecx
        dec ecx
        add ecx, edx
        cmp ecx, eax
        jbe public_6f2cd14
        mov ecx, esi
        call public_6f2ca80
        mov dword ptr ss : [esp+0x10], eax
        public_6f2cd14 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp ebp, eax
        jbe public_6f2cd55
        nop 
        lea esp, ss:[esp]
        public_6f2cd20 : nop
        mov edx, dword ptr ds : [esi+4]
        push eax
        push ebx
        push edx
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_6f5a074]
        add ebx, dword ptr ds : [esi+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0xC
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        mov ecx, esi
        call public_6f2ca80
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+8]
        cmp ebp, eax
        ja public_6f2cd20
        public_6f2cd55 : nop
        test ebp, ebp
        je public_6f2cd77
        mov eax, dword ptr ds : [esi+4]
        push ebx
        add eax, dword ptr ds : [esi+0xC]
/*FIXUP push offset public_6f5f6c8 @0x6f2cd60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6c8
        push eax
        call dword ptr ds : [public_6f5a06c]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 0xC
        add ecx, eax
        mov dword ptr ds : [esi+0xC], ecx
        public_6f2cd77 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6f57e26
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f2cc90)
    }
}

#undef public_6f2ccb1
#undef public_6f2cd14
#undef public_6f2cd20
#undef public_6f2cd55
#undef public_6f2cd77
