#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_451380);

#define public_4512b5 _public_4512b5
#define public_4512ea _public_4512ea
#define public_451320 _public_451320

PROC_DECLARE(0x451290, internal_451290, public_451290);
extern "C" NAKED register_t __cdecl internal_451290()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        lea ecx, ss:[ebp+0x170]
        call dword ptr ds : [public_5c61bc]
        mov ebx, 0xFFFFFEA0
        lea edi, ss:[ebp+0x160]
        lea esi, ss:[ebp+0xE0]
        sub ebx, ebp
        public_4512b5 : nop
        cmp byte ptr ds : [edi], 0
        je public_4512ea
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x40], 0xFFFFFFFF
        mov byte ptr ds : [edi], 0
        public_4512ea : nop
        add esi, 4
        inc edi
        lea eax, ds:[ebx+edi]
        cmp eax, 0x10
        jl public_4512b5
        mov ecx, ebp
        call public_451380
        mov eax, dword ptr ss : [ebp+0x6C]
        test eax, eax
        je public_451320
        mov byte ptr ds : [eax+0x15], 3
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov byte ptr ds : [ecx+0x16], 0
        mov edx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [edx+0x18], 0
        mov eax, dword ptr ss : [ebp+0x6C]
        mov byte ptr ds : [eax+0x14], 0
        public_451320 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x451290)
    }
}

#undef public_4512b5
#undef public_4512ea
#undef public_451320
