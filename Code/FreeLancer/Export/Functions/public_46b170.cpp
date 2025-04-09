#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_45fb40);
CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_46a3c0);
CLANG_FORWARD_PROC_SYMBOL(public_46b170);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46d380);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_46b1c7 _public_46b1c7
#define public_46b1d6 _public_46b1d6
#define public_46b1ea _public_46b1ea
#define public_46b214 _public_46b214
#define public_46b249 _public_46b249
#define public_46b26a _public_46b26a
#define public_46b29f _public_46b29f

PROC_DECLARE(0x46b170, internal_46b170, public_46b170);
extern "C" NAKED register_t __cdecl internal_46b170()
{
    __asm
    {
        sub esp, 0xC
        push esi
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_46b29f
        mov esi, dword ptr ds : [public_66da84]
        test esi, esi
        je public_46b1c7
        mov eax, dword ptr ds : [esi+0x344]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x340]
        push eax
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        call public_46d380
        mov eax, dword ptr ds : [esi+0x358]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x354]
        push eax
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        call public_4a2f80
        mov ecx, esi
        call public_462e30
        public_46b1c7 : nop
        mov ecx, dword ptr ds : [public_66da7c]
        test ecx, ecx
        je public_46b1d6
        call public_45fb40
        public_46b1d6 : nop
        mov eax, dword ptr ds : [public_66da80]
        test eax, eax
        mov byte ptr ds : [public_66da88], 0
        je public_46b1ea
        and byte ptr ds : [eax+0x6C], 0xFC
        public_46b1ea : nop
        push ebx
        push 0
        call public_46a3c0
        mov ebx, dword ptr ds : [public_66da60]
        add esp, 4
        test ebx, ebx
        je public_46b26a
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        lea edi, ds:[ebx+4]
        mov dword ptr ss : [esp+0x10], ebx
        je public_46b249
        push ebp
        lea ebp, ds:[ebx+0xC]
        public_46b214 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ebx, ecx
        call public_46bb50
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+4]
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_5947a0
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi]
        jne public_46b214
        mov ebx, dword ptr ss : [esp+0x14]
        pop ebp
        public_46b249 : nop
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi]
        push edi
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_4a2f80
        mov ecx, ebx
        call public_4686e0
        mov ecx, ebx
        call public_4684e0
        pop edi
        public_46b26a : nop
        mov eax, dword ptr ds : [public_66da40]
/*FIXUP push offset public_5cf04c @0x46b26f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf04c
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [public_66d3fc], eax
        call public_59da10
        add esp, 4
        mov esi, eax
        test esi, esi
        pop ebx
        je public_46b29f
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call public_45eaf0
        mov ecx, esi
        call public_57d330
        public_46b29f : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x46b170)
    }
}

#undef public_46b1c7
#undef public_46b1d6
#undef public_46b1ea
#undef public_46b214
#undef public_46b249
#undef public_46b26a
#undef public_46b29f
