#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58e430);
CLANG_FORWARD_PROC_SYMBOL(public_590450);
CLANG_FORWARD_PROC_SYMBOL(public_599980);

#define public_590473 _public_590473
#define public_5904a1 _public_5904a1
#define public_5904ae _public_5904ae
#define public_5904bf _public_5904bf
#define public_5904c8 _public_5904c8
#define public_5904e9 _public_5904e9

PROC_DECLARE(0x590450, internal_590450, public_590450);
extern "C" NAKED register_t __cdecl internal_590450()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov edx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [edx+8]
        cmp eax, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], edx
        mov esi, ecx
        je public_5904bf
        mov ebx, eax
        lea edi, ds:[eax+4]
        sub ebx, ecx
        public_590473 : nop
        mov al, byte ptr ds : [edi-4]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [ebx+esi+1]
        mov byte ptr ds : [esi+1], cl
        mov al, byte ptr ds : [edi-2]
        mov byte ptr ds : [esi+2], al
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_5904a1
        call public_599980
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], 0
        public_5904a1 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        je public_5904ae
        inc dword ptr ds : [eax+4]
        public_5904ae : nop
        add edi, 0xC
        lea eax, ds:[edi-4]
        add esi, 0xC
        cmp eax, ebp
        jne public_590473
        mov ecx, dword ptr ss : [esp+0x18]
        public_5904bf : nop
        mov ebx, dword ptr ds : [edx+8]
        cmp esi, ebx
        mov edi, esi
        je public_5904e9
        public_5904c8 : nop
        mov ecx, edi
        call public_58e430
        add edi, 0xC
        cmp edi, ebx
        jne public_5904c8
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_5904e9 : nop
        pop edi
        mov dword ptr ds : [edx+8], esi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x590450)
    }
}

#undef public_590473
#undef public_5904a1
#undef public_5904ae
#undef public_5904bf
#undef public_5904c8
#undef public_5904e9
