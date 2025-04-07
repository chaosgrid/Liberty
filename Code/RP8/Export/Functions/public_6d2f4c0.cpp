#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f4c0);

#define public_6d2f4e8 _public_6d2f4e8
#define public_6d2f4f1 _public_6d2f4f1
#define public_6d2f503 _public_6d2f503
#define public_6d2f509 _public_6d2f509
#define public_6d2f516 _public_6d2f516
#define public_6d2f51d _public_6d2f51d
#define public_6d2f52f _public_6d2f52f
#define public_6d2f532 _public_6d2f532

PROC_DECLARE(0x6d2f4c0, internal_6d2f4c0, public_6d2f4c0);
extern "C" NAKED register_t __cdecl internal_6d2f4c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ds : [ecx+4]
        push esi
        lea esi, ds:[eax+eax*4]
        add esi, dword ptr ds : [edx+4]
        xor eax, eax
        cmp dword ptr ds : [esi*4+public_6d5f198], eax
        je public_6d2f52f
        push ebx
        push edi
        mov edi, edx
        push 5
        mov dword ptr ss : [ebp-4], eax
        lea esi, ds:[ecx+0xC]
        sub edi, ecx
        pop ebx
        public_6d2f4e8 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        jbe public_6d2f4f1
        inc dword ptr ss : [ebp-4]
        public_6d2f4f1 : nop
        mov edx, dword ptr ds : [edi+esi]
        cmp ecx, edx
        jae public_6d2f509
        test ecx, ecx
        jne public_6d2f503
        add eax, 0x100
        jmp public_6d2f51d
        public_6d2f503 : nop
        sub edx, ecx
        add eax, edx
        jmp public_6d2f51d
        public_6d2f509 : nop
        jbe public_6d2f51d
        test edx, edx
        jne public_6d2f516
        add eax, 0x1000000
        jmp public_6d2f51d
        public_6d2f516 : nop
        sub ecx, edx
        shl ecx, 0x10
        add eax, ecx
        public_6d2f51d : nop
        add esi, 4
        dec ebx
        jne public_6d2f4e8
        mov ecx, eax
        shr ecx, 0x18
        cmp dword ptr ss : [ebp-4], ecx
        pop edi
        pop ebx
        jne public_6d2f532
        public_6d2f52f : nop
        or eax, 0xFFFFFFFF
        public_6d2f532 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d2f4c0)
    }
}

#undef public_6d2f4e8
#undef public_6d2f4f1
#undef public_6d2f503
#undef public_6d2f509
#undef public_6d2f516
#undef public_6d2f51d
#undef public_6d2f52f
#undef public_6d2f532
