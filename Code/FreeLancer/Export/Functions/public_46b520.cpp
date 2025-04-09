#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_46b520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46b540 _public_46b540
#define public_46b54b _public_46b54b
#define public_46b551 _public_46b551
#define public_46b554 _public_46b554

PROC_DECLARE(0x46b520, internal_46b520, public_46b520);
extern "C" NAKED register_t __cdecl internal_46b520()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_66da84]
        test esi, esi
        push edi
        je public_46b551
        mov edx, dword ptr ds : [esi+0x358]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_46b551
        mov edi, dword ptr ss : [esp+0xC]
        lea esp, ss:[esp]
        public_46b540 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_46b54b
        cmp ecx, edi
        je public_46b554
        public_46b54b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_46b540
        public_46b551 : nop
        pop edi
        pop esi
        ret 
        public_46b554 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        add esp, 4
        dec dword ptr ds : [esi+0x35C]
        mov ecx, esi
        pop edi
        pop esi
        jmp public_462e30
        UNREACHABLE_TRAP(0x46b520)
    }
}

#undef public_46b540
#undef public_46b54b
#undef public_46b551
#undef public_46b554
