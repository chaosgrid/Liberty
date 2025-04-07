#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f47ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f47bc0 _public_6f47bc0
#define public_6f47bce _public_6f47bce
#define public_6f47c0e _public_6f47c0e
#define public_6f47c16 _public_6f47c16
#define public_6f47c20 _public_6f47c20
#define public_6f47c2e _public_6f47c2e
#define public_6f47c46 _public_6f47c46
#define public_6f47c5d _public_6f47c5d
#define public_6f47c65 _public_6f47c65
#define public_6f47c6d _public_6f47c6d
#define public_6f47c79 _public_6f47c79
#define public_6f47c81 _public_6f47c81
#define public_6f47cb5 _public_6f47cb5
#define public_6f47cda _public_6f47cda
#define public_6f47d03 _public_6f47d03

PROC_DECLARE(0x6f47ba0, internal_6f47ba0, public_6f47ba0);
extern "C" NAKED register_t __cdecl internal_6f47ba0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push ebx
        push esi
        lea esi, ds:[ecx+0x24]
        mov byte ptr ds : [ecx+0x21], al
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        push edi
        je public_6f47bce
        lea esp, ss:[esp]
        public_6f47bc0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f47bc0
        public_6f47bce : nop
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov dword ptr ds : [esi+8], ecx
        je public_6f47d03
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6f47d03
        mov ebx, dword ptr ds : [edi+8]
        mov edx, ebx
        sub edx, eax
        sar edx, 2
        test edx, edx
        je public_6f47d03
        cmp esi, edi
        je public_6f47d03
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push ebp
        jne public_6f47c0e
        xor ebp, ebp
        jmp public_6f47c16
        public_6f47c0e : nop
        mov ebp, dword ptr ds : [esi+8]
        sub ebp, ecx
        sar ebp, 2
        public_6f47c16 : nop
        cmp edx, ebp
        pop ebp
        ja public_6f47c5d
        cmp eax, ebx
        je public_6f47c2e
        nop 
        public_6f47c20 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6f47c20
        public_6f47c2e : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f47c46
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebx
        ret 8
        public_6f47c46 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [esi+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebx
        ret 8
        public_6f47c5d : nop
        test ecx, ecx
        jne public_6f47c65
        xor ebx, ebx
        jmp public_6f47c6d
        public_6f47c65 : nop
        mov ebx, dword ptr ds : [esi+0xC]
        sub ebx, ecx
        sar ebx, 2
        public_6f47c6d : nop
        cmp edx, ebx
        ja public_6f47cb5
        test ecx, ecx
        jne public_6f47c79
        xor edx, edx
        jmp public_6f47c81
        public_6f47c79 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6f47c81 : nop
        push ecx
        lea ebx, ds:[eax+edx*4]
        push ebx
        push eax
        call public_6f6a640
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_6eed270
        mov ecx, edi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebx
        ret 8
        public_6f47cb5 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jge public_6f47cda
        xor eax, eax
        public_6f47cda : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f47d03 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f47ba0)
    }
}

#undef public_6f47bc0
#undef public_6f47bce
#undef public_6f47c0e
#undef public_6f47c16
#undef public_6f47c20
#undef public_6f47c2e
#undef public_6f47c46
#undef public_6f47c5d
#undef public_6f47c65
#undef public_6f47c6d
#undef public_6f47c79
#undef public_6f47c81
#undef public_6f47cb5
#undef public_6f47cda
#undef public_6f47d03
