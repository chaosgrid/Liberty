#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4660);
CLANG_FORWARD_PROC_SYMBOL(public_62e4d00);

#define public_62e4d28 _public_62e4d28
#define public_62e4d55 _public_62e4d55
#define public_62e4d7f _public_62e4d7f
#define public_62e4db2 _public_62e4db2
#define public_62e4dd6 _public_62e4dd6
#define public_62e4e55 _public_62e4e55
#define public_62e4e7c _public_62e4e7c
#define public_62e4e8c _public_62e4e8c

PROC_DECLARE(0x62e4d00, internal_62e4d00, public_62e4d00);
extern "C" NAKED register_t __cdecl internal_62e4d00()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [edi+0x7D]
        test al, al
        mov bl, 1
        jne public_62e4d28
        mov ecx, dword ptr ds : [edi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[edi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [edi+0x7D], bl
        public_62e4d28 : nop
        test dword ptr ds : [edi+8], 0x30000
        mov esi, dword ptr ss : [esp+0x20]
        je public_62e4e7c
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62e4d55
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], bl
        public_62e4d55 : nop
        test dword ptr ds : [esi+8], 0x30000
        je public_62e4e7c
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e4d7f
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], bl
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e4d7f : nop
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
        jne public_62e4db2
        mov ecx, dword ptr ds : [esi+0x84]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e4db2 : nop
        mov al, byte ptr ds : [edi+0x7E]
        test al, al
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x20], ecx
        jne public_62e4dd6
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e4dd6 : nop
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
        jne public_62e4e55
        mov ecx, dword ptr ds : [edi+0x84]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e4e55 : nop
        fld dword ptr ds : [edi+0x18]
        fadd dword ptr ss : [esp+0x20]
        fsubr dword ptr ss : [esp+0x1C]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62e4e8c
        pop edi
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_62e4e7c : nop
        mov esi, dword ptr ds : [esi+0x84]
        push esi
        push edi
        call public_62e4660
        add esp, 8
        public_62e4e8c : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62e4d00)
    }
}

#undef public_62e4d28
#undef public_62e4d55
#undef public_62e4d7f
#undef public_62e4db2
#undef public_62e4dd6
#undef public_62e4e55
#undef public_62e4e7c
#undef public_62e4e8c
