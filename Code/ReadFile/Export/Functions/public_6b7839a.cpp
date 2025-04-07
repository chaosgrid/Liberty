#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76220);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ef);

#define public_6b783b6 _public_6b783b6
#define public_6b783c0 _public_6b783c0
#define public_6b783d2 _public_6b783d2
#define public_6b783dc _public_6b783dc
#define public_6b783de _public_6b783de
#define public_6b783e2 _public_6b783e2
#define public_6b783fe _public_6b783fe
#define public_6b78407 _public_6b78407
#define public_6b78416 _public_6b78416
#define public_6b7842d _public_6b7842d
#define public_6b78430 _public_6b78430

PROC_DECLARE(0x6b7839a, internal_6b7839a, public_6b7839a);
extern "C" NAKED register_t __cdecl internal_6b7839a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_6b783b6
        cmp dword ptr ds : [public_6b7a22c], 0
        jmp public_6b783dc
        public_6b783b6 : nop
        cmp esi, 1
        je public_6b783c0
        cmp esi, 2
        jne public_6b783e2
        public_6b783c0 : nop
        mov eax, dword ptr ds : [public_6b7a23c]
        test eax, eax
        je public_6b783d2
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6b783de
        public_6b783d2 : nop
        push edi
        push esi
        push ebx
        call public_6b782ef
        test eax, eax
        public_6b783dc : nop
        jne public_6b783e2
        public_6b783de : nop
        xor eax, eax
        jmp public_6b78430
        public_6b783e2 : nop
        push edi
        push esi
        push ebx
        call public_6b76220
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6b783fe
        test eax, eax
        jne public_6b7842d
        push edi
        push eax
        push ebx
        call public_6b782ef
        public_6b783fe : nop
        test esi, esi
        je public_6b78407
        cmp esi, 3
        jne public_6b7842d
        public_6b78407 : nop
        push edi
        push esi
        push ebx
        call public_6b782ef
        test eax, eax
        jne public_6b78416
        and dword ptr ss : [ebp+0xC], eax
        public_6b78416 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6b7842d
        mov eax, dword ptr ds : [public_6b7a23c]
        test eax, eax
        je public_6b7842d
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6b7842d : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6b78430 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6b7839a)
    }
}

#undef public_6b783b6
#undef public_6b783c0
#undef public_6b783d2
#undef public_6b783dc
#undef public_6b783de
#undef public_6b783e2
#undef public_6b783fe
#undef public_6b78407
#undef public_6b78416
#undef public_6b7842d
#undef public_6b78430
