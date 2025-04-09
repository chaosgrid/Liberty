#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44a2f0);

#define public_44a310 _public_44a310
#define public_44a322 _public_44a322
#define public_44a326 _public_44a326
#define public_44a346 _public_44a346
#define public_44a34a _public_44a34a
#define public_44a34f _public_44a34f
#define public_44a365 _public_44a365
#define public_44a370 _public_44a370

PROC_DECLARE(0x44a2f0, internal_44a2f0, public_44a2f0);
extern "C" NAKED register_t __cdecl internal_44a2f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x818]
        xor eax, eax
        xor ebp, ebp
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], edi
        jle public_44a370
        add edi, 0x618
        nop 
        public_44a310 : nop
        mov edx, dword ptr ds : [edi]
        add edx, 0x38
        mov edx, dword ptr ds : [edx+4]
        test edx, edx
        jne public_44a322
        mov edx, dword ptr ds : [public_5c7078]
        public_44a322 : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_44a326 : nop
        mov al, byte ptr ds : [edx]
        mov bl, al
        cmp al, byte ptr ds : [esi]
        jne public_44a34a
        test bl, bl
        je public_44a346
        mov al, byte ptr ds : [edx+1]
        mov bl, al
        cmp al, byte ptr ds : [esi+1]
        jne public_44a34a
        add edx, 2
        add esi, 2
        test bl, bl
        jne public_44a326
        public_44a346 : nop
        xor edx, edx
        jmp public_44a34f
        public_44a34a : nop
        sbb edx, edx
        sbb edx, 0xFFFFFFFF
        public_44a34f : nop
        test edx, edx
        je public_44a365
        inc ebp
        add edi, 4
        cmp ebp, ecx
        jl public_44a310
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        public_44a365 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+ebp*4+0x618]
        public_44a370 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x44a2f0)
    }
}

#undef public_44a310
#undef public_44a322
#undef public_44a326
#undef public_44a346
#undef public_44a34a
#undef public_44a34f
#undef public_44a365
#undef public_44a370
