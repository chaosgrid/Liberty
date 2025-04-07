#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a6010);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62a3298 _public_62a3298
#define public_62a329e _public_62a329e
#define public_62a32c0 _public_62a32c0
#define public_62a32c6 _public_62a32c6
#define public_62a32e8 _public_62a32e8
#define public_62a32ee _public_62a32ee
#define public_62a3327 _public_62a3327
#define public_62a3329 _public_62a3329
#define public_62a3345 _public_62a3345
#define public_62a3347 _public_62a3347
#define public_62a3363 _public_62a3363
#define public_62a3365 _public_62a3365

PROC_DECLARE(0x62a3270, internal_62a3270, public_62a3270);
extern "C" NAKED register_t __cdecl internal_62a3270()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi]
        push edi
        fcomp dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jne public_62a3298
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a329e
        public_62a3298 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a329e : nop
        call public_6391dae
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_6399408]
        mov edi, eax
        fld dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_62a32c0
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a32c6
        public_62a32c0 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a32c6 : nop
        call public_6391dae
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_6399408]
        mov ebp, eax
        fld dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_62a32e8
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a32ee
        public_62a32e8 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a32ee : nop
        call public_6391dae
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+0x30], esi
        fild dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [public_639a1d0]
        fmul dword ptr ds : [public_639c13c]
        call public_6391dae
        mov ecx, eax
        mov eax, edi
        cdq 
        idiv esi
        imul eax, esi
        test edi, edi
        jle public_62a3327
        add eax, ecx
        jmp public_62a3329
        public_62a3327 : nop
        sub eax, ecx
        public_62a3329 : nop
        mov dword ptr ss : [esp+0x30], eax
        mov eax, ebp
        fild dword ptr ss : [esp+0x30]
        cdq 
        idiv esi
        fstp dword ptr ss : [esp+0x14]
        imul eax, esi
        test ebp, ebp
        jle public_62a3345
        add eax, ecx
        jmp public_62a3347
        public_62a3345 : nop
        sub eax, ecx
        public_62a3347 : nop
        mov dword ptr ss : [esp+0x30], eax
        mov eax, ebx
        fild dword ptr ss : [esp+0x30]
        cdq 
        idiv esi
        fstp dword ptr ss : [esp+0x18]
        imul eax, esi
        test ebx, ebx
        jle public_62a3363
        add eax, ecx
        jmp public_62a3365
        public_62a3363 : nop
        sub eax, ecx
        public_62a3365 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], eax
        fild dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        call public_62a6010
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x62a3270)
    }
}

#undef public_62a3298
#undef public_62a329e
#undef public_62a32c0
#undef public_62a32c6
#undef public_62a32e8
#undef public_62a32ee
#undef public_62a3327
#undef public_62a3329
#undef public_62a3345
#undef public_62a3347
#undef public_62a3363
#undef public_62a3365
