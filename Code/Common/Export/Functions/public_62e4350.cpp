#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4350);
CLANG_FORWARD_PROC_SYMBOL(public_62e4660);

#define public_62e437a _public_62e437a
#define public_62e43a8 _public_62e43a8
#define public_62e43d2 _public_62e43d2
#define public_62e4405 _public_62e4405
#define public_62e4429 _public_62e4429
#define public_62e44a8 _public_62e44a8
#define public_62e44ca _public_62e44ca
#define public_62e44da _public_62e44da
#define public_62e44ee _public_62e44ee

PROC_DECLARE(0x62e4350, internal_62e4350, public_62e4350);
extern "C" NAKED register_t __cdecl internal_62e4350()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [edi+0x7D]
        test al, al
        mov ebx, 1
        jne public_62e437a
        mov ecx, dword ptr ds : [edi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[edi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [edi+0x7D], bl
        public_62e437a : nop
        test dword ptr ds : [edi+8], 0x30000
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        je public_62e44ca
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62e43a8
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], bl
        public_62e43a8 : nop
        test dword ptr ds : [esi+8], 0x30000
        je public_62e44ca
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e43d2
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], bl
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e43d2 : nop
        lea eax, ds:[esi+0xC]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov cl, byte ptr ds : [esi+0x7E]
        test cl, cl
        mov dword ptr ss : [esp+0x10], edx
        jne public_62e4405
        mov ecx, dword ptr ds : [esi+0x84]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e4405 : nop
        mov al, byte ptr ds : [edi+0x7E]
        test al, al
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x20], ecx
        jne public_62e4429
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e4429 : nop
        fld dword ptr ds : [edi+0xC]
        lea eax, ds:[edi+0xC]
        fsub dword ptr ss : [esp+0xC]
        mov edx, 0x5F3759DF
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ds : [edi+0x7E]
        test cl, cl
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        jne public_62e44a8
        mov ecx, dword ptr ds : [edi+0x84]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e44a8 : nop
        fld dword ptr ds : [edi+0x18]
        fadd dword ptr ss : [esp+0x20]
        fsubr dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e44da
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        jmp public_62e44da
        public_62e44ca : nop
        mov esi, dword ptr ds : [esi+0x84]
        push esi
        push edi
        call public_62e4660
        add esp, 8
        public_62e44da : nop
        fcomp dword ptr ss : [esp+0x24]
        pop esi
        fnstsw ax
        test ah, 0x41
        jp public_62e44ee
        pop edi
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 
        public_62e44ee : nop
        pop edi
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62e4350)
    }
}

#undef public_62e437a
#undef public_62e43a8
#undef public_62e43d2
#undef public_62e4405
#undef public_62e4429
#undef public_62e44a8
#undef public_62e44ca
#undef public_62e44da
#undef public_62e44ee
