#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4e4f8);

#define public_6d4e520 _public_6d4e520
#define public_6d4e540 _public_6d4e540
#define public_6d4e55b _public_6d4e55b
#define public_6d4e574 _public_6d4e574
#define public_6d4e585 _public_6d4e585

PROC_DECLARE(0x6d4e4f8, internal_6d4e4f8, public_6d4e4f8);
extern "C" NAKED register_t __cdecl internal_6d4e4f8()
{
    __asm
    {
        mov ecx, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [eax+0x1A4]
        push edi
        push 0x7FC
        push 1
        push eax
        call dword ptr ds : [ecx]
        add eax, 0x3FC
        add esp, 0xC
        mov dword ptr ds : [esi+0x28], eax
        xor edx, edx
        xor ecx, ecx
        xor edi, edi
        mov esi, eax
        public_6d4e520 : nop
        mov dword ptr ds : [eax+ecx*4], edx
        mov dword ptr ds : [esi], edi
        inc ecx
        sub esi, 4
        inc edx
        dec edi
        cmp ecx, 0x10
        jl public_6d4e520
        cmp ecx, 0x30
        jge public_6d4e55b
        mov esi, ecx
        shl esi, 2
        mov edi, esi
        mov esi, eax
        sub esi, edi
        public_6d4e540 : nop
        mov edi, edx
        neg edi
        mov dword ptr ds : [eax+ecx*4], edx
        mov dword ptr ds : [esi], edi
        inc ecx
        mov edi, ecx
        not edi
        and edi, 1
        sub esi, 4
        add edx, edi
        cmp ecx, 0x30
        jl public_6d4e540
        public_6d4e55b : nop
        cmp ecx, 0xFF
        jg public_6d4e585
        mov esi, ecx
        shl esi, 2
        push ebx
        mov ebx, esi
        mov edi, edx
        mov esi, eax
        neg edi
        sub esi, ebx
        pop ebx
        public_6d4e574 : nop
        mov dword ptr ds : [eax+ecx*4], edx
        mov dword ptr ds : [esi], edi
        inc ecx
        sub esi, 4
        cmp ecx, 0xFF
        jle public_6d4e574
        public_6d4e585 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d4e4f8)
    }
}

#undef public_6d4e520
#undef public_6d4e540
#undef public_6d4e55b
#undef public_6d4e574
#undef public_6d4e585
