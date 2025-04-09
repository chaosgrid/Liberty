#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb80);
CLANG_FORWARD_PROC_SYMBOL(public_4c71b0);
CLANG_FORWARD_PROC_SYMBOL(public_4cba60);
CLANG_FORWARD_PROC_SYMBOL(public_4cc140);
CLANG_FORWARD_PROC_SYMBOL(public_4ccde0);

#define public_4cc16d _public_4cc16d
#define public_4cc17a _public_4cc17a
#define public_4cc227 _public_4cc227
#define public_4cc242 _public_4cc242
#define public_4cc24a _public_4cc24a
#define public_4cc26f _public_4cc26f
#define public_4cc283 _public_4cc283
#define public_4cc2a1 _public_4cc2a1
#define public_4cc2af _public_4cc2af

PROC_DECLARE(0x4cc140, internal_4cc140, public_4cc140);
extern "C" NAKED register_t __cdecl internal_4cc140()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x38]
        lea esi, ds:[edi+0x38]
        xor ebx, ebx
        cmp al, bl
        je public_4cc2af
        cmp byte ptr ds : [esi+0x4C], bl
        je public_4cc16d
        mov dword ptr ds : [esi+0x44], 0x3F800000
        mov byte ptr ds : [esi+0x4C], bl
        mov byte ptr ds : [esi], 1
        jmp public_4cc17a
        public_4cc16d : nop
        cmp byte ptr ds : [esi+0x4D], bl
        je public_4cc17a
        mov dword ptr ds : [esi+0x44], ebx
        mov byte ptr ds : [esi+0x4D], bl
        mov byte ptr ds : [esi], bl
/*FIXUP public_4cc17a : nop
        push offset public_67dbf8 @0x4cc17a*/
  FIXUP public_4cc17a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        mov ecx, esi
        call public_4ccde0
        lea eax, ds:[edi+0xD4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        lea ecx, ds:[edi+0x164]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        call public_4c71b0
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        add esp, 0xC
        mov dword ptr ss : [esp+0x2C], edx
        push 1
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        push edx
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], eax
        call public_40fb80
        cmp byte ptr ds : [esi], bl
        je public_4cc2af
        mov ebp, dword ptr ds : [edi+0x170]
        cmp ebp, ebx
        je public_4cc26f
        fld dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x4C]
        fcomp qword ptr ds : [public_5c8ba8]
        mov dword ptr ss : [esp+0x50], eax
        fnstsw ax
        test ah, 0x41
        jne public_4cc26f
        public_4cc227 : nop
        fld dword ptr ss : [esp+0x50]
        fcomp dword ptr ds : [public_5d043c]
        fnstsw ax
        test ah, 5
        jp public_4cc242
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x4C], ecx
        jmp public_4cc24a
        public_4cc242 : nop
        mov dword ptr ss : [esp+0x4C], 0x3E4CCCCD
        public_4cc24a : nop
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        mov ecx, ebp
        call public_4cba60
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x4C]
        fst dword ptr ss : [esp+0x50]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        je public_4cc227
        public_4cc26f : nop
        cmp byte ptr ds : [edi+8], bl
        je public_4cc2af
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_4cc283
        add eax, 0xFFFFFF64
        cmp eax, ebx
        jne public_4cc2af
        public_4cc283 : nop
        cmp byte ptr ds : [esi], bl
        je public_4cc2af
        cmp byte ptr ds : [esi+0x4D], bl
        jne public_4cc2af
        mov byte ptr ds : [esi+0x4C], bl
        mov byte ptr ds : [esi+0x4D], 1
        cmp dword ptr ds : [edi+0x170], ebx
        je public_4cc2a1
        mov dword ptr ds : [edi+0x170], ebx
        public_4cc2a1 : nop
        mov edi, dword ptr ds : [edi+0x1BC]
        cmp edi, ebx
        je public_4cc2af
        and byte ptr ds : [edi+0x6C], 0xFC
        public_4cc2af : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x4cc140)
    }
}

#undef public_4cc16d
#undef public_4cc17a
#undef public_4cc227
#undef public_4cc242
#undef public_4cc24a
#undef public_4cc26f
#undef public_4cc283
#undef public_4cc2a1
#undef public_4cc2af
