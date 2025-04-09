#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_45fb40);
CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_46a3c0);
CLANG_FORWARD_PROC_SYMBOL(public_46b2b0);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46d380);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_46b317 _public_46b317
#define public_46b326 _public_46b326
#define public_46b33a _public_46b33a
#define public_46b362 _public_46b362
#define public_46b397 _public_46b397
#define public_46b3c3 _public_46b3c3
#define public_46b3f9 _public_46b3f9

PROC_DECLARE(0x46b2b0, internal_46b2b0, public_46b2b0);
extern "C" NAKED register_t __cdecl internal_46b2b0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_46b3f9
        mov esi, dword ptr ds : [public_66da84]
        test esi, esi
        push ebx
        push edi
        je public_46b317
        mov ebx, dword ptr ds : [esi+0x344]
        lea edi, ds:[esi+0x340]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_46d380
        mov eax, dword ptr ds : [esi+0x358]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x354]
        push eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_4a2f80
        mov ecx, esi
        call public_462e30
        public_46b317 : nop
        mov ecx, dword ptr ds : [public_66da7c]
        test ecx, ecx
        je public_46b326
        call public_45fb40
        public_46b326 : nop
        mov eax, dword ptr ds : [public_66da80]
        test eax, eax
        mov byte ptr ds : [public_66da88], 0
        je public_46b33a
        and byte ptr ds : [eax+0x6C], 0xFC
        public_46b33a : nop
        push 0
        call public_46a3c0
        mov ebx, dword ptr ds : [public_66da60]
        add esp, 4
        test ebx, ebx
        je public_46b3c3
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea edi, ds:[ebx+4]
        mov dword ptr ss : [esp+0x10], ebx
        je public_46b397
        push ebp
        lea ebp, ds:[ebx+0xC]
        public_46b362 : nop
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
        jne public_46b362
        mov ebx, dword ptr ss : [esp+0x14]
        pop ebp
        public_46b397 : nop
        mov edi, dword ptr ds : [edi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push edi
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_4a2f80
        mov ecx, ebx
        call public_4686e0
        mov ecx, ebx
        call public_4684e0
        public_46b3c3 : nop
        mov eax, dword ptr ds : [public_66da40]
/*FIXUP push offset public_5cf04c @0x46b3c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf04c
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [public_66d3fc], eax
        call public_59da10
        add esp, 4
        mov esi, eax
        test esi, esi
        pop edi
        pop ebx
        je public_46b3f9
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call public_45eaf0
        mov ecx, esi
        call public_57d330
        public_46b3f9 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x46b2b0)
    }
}

#undef public_46b317
#undef public_46b326
#undef public_46b33a
#undef public_46b362
#undef public_46b397
#undef public_46b3c3
#undef public_46b3f9
