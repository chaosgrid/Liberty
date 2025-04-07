#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6290310);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6290355 _public_6290355
#define public_6290367 _public_6290367
#define public_6290385 _public_6290385

PROC_DECLARE(0x6290310, internal_6290310, public_6290310);
extern "C" NAKED register_t __cdecl internal_6290310()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x11]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_6290385
        mov al, byte ptr ss : [ebp+0x10]
        push esi
        push 0x14
        mov byte ptr ss : [esp+0x18], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ds:[esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov byte ptr ds : [esi+0x10], dl
        mov byte ptr ds : [esi+0x11], 0
        je public_6290355
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        public_6290355 : nop
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        cmp ebx, dword ptr ds : [edi+8]
        jne public_6290367
        mov ebx, esi
        public_6290367 : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_6290310
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_6290310
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6290385 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6290310)
    }
}

#undef public_6290355
#undef public_6290367
#undef public_6290385
