#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4d00);
CLANG_FORWARD_PROC_SYMBOL(public_62e4f20);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e7580);
CLANG_FORWARD_PROC_SYMBOL(public_62e8280);

#define public_62e82a8 _public_62e82a8
#define public_62e82aa _public_62e82aa
#define public_62e82d0 _public_62e82d0
#define public_62e82ed _public_62e82ed
#define public_62e8338 _public_62e8338
#define public_62e8344 _public_62e8344
#define public_62e8348 _public_62e8348
#define public_62e8385 _public_62e8385
#define public_62e83a3 _public_62e83a3
#define public_62e83cf _public_62e83cf
#define public_62e83d1 _public_62e83d1
#define public_62e83f0 _public_62e83f0

PROC_DECLARE(0x62e8280, internal_62e8280, public_62e8280);
extern "C" NAKED register_t __cdecl internal_62e8280()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        add eax, 8
        mov eax, dword ptr ds : [eax]
        push esi
        push edi
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x14], 0x47C35000
        je public_62e82a8
        add eax, 0xFFFFFFF8
        jmp public_62e82aa
        public_62e82a8 : nop
        xor eax, eax
        public_62e82aa : nop
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_62e60e0
        add esp, 8
        mov ecx, ebx
        call public_62e7580
        mov ebp, eax
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        je public_62e83f0
        lea ecx, ds:[ecx]
        public_62e82d0 : nop
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62e82ed
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+8]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62e82ed : nop
        test dword ptr ds : [esi+8], 0x7F0000
        je public_62e83d1
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        jne public_62e8348
        mov ecx, dword ptr ds : [esi+0x80]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x84]
        lea edi, ds:[esi+4]
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [esi], 0
        je public_62e8338
        test eax, eax
        je public_62e8338
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push esi
        call dword ptr ds : [edx+0x6C]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x13], al
        jne public_62e8344
        public_62e8338 : nop
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [edi], 0
        public_62e8344 : nop
        mov byte ptr ds : [esi+0x7C], 1
        public_62e8348 : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_63a0790]
        fnstsw ax
        test ah, 0x41
        jp public_62e83d1
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_62e8385
        mov eax, dword ptr ds : [ebx+4]
        add eax, 0x14FC
        push esi
        push eax
        call public_62e4d00
        fcomp dword ptr ss : [esp+0x34]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_62e83d1
        public_62e8385 : nop
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e83a3
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e83a3 : nop
        lea ecx, ds:[esi+0xC]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_62e4f20
        fcom dword ptr ss : [esp+0x1C]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_62e83cf
        mov eax, dword ptr ds : [esi+0x84]
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_62e83d1
        public_62e83cf : nop
        fstp st(0)
        public_62e83d1 : nop
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0x88
        cmp esi, eax
        jne public_62e82d0
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        public_62e83f0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62e8280)
    }
}

#undef public_62e82a8
#undef public_62e82aa
#undef public_62e82d0
#undef public_62e82ed
#undef public_62e8338
#undef public_62e8344
#undef public_62e8348
#undef public_62e8385
#undef public_62e83a3
#undef public_62e83cf
#undef public_62e83d1
#undef public_62e83f0
