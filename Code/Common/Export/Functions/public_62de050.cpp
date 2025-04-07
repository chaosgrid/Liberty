#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62de050);
CLANG_FORWARD_PROC_SYMBOL(public_62df360);
CLANG_FORWARD_PROC_SYMBOL(public_62e55b0);
CLANG_FORWARD_PROC_SYMBOL(public_62e7a30);

#define public_62de0f8 _public_62de0f8
#define public_62de14e _public_62de14e

PROC_DECLARE(0x62de050, internal_62de050, public_62de050);
extern "C" NAKED register_t __cdecl internal_62de050()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x245]
        test al, al
        push edi
        je public_62de14e
        mov al, byte ptr ds : [esi+0x24C]
        test al, al
        je public_62de14e
        mov eax, dword ptr ds : [esi+0x1C0]
        mov ebx, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x28]
        xor eax, eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+0x248]
        push ecx
        push edx
        lea ecx, ds:[ebx+0x34]
        mov byte ptr ds : [esi+0x255], al
        call public_62e7a30
        mov ebp, eax
        test ebp, ebp
        je public_62de0f8
        push ebp
        add ebx, 0x14FC
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        call public_62e55b0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [ecx], ebp
        mov byte ptr ds : [esi+0x255], 1
        mov edx, dword ptr ss : [ebp]
        add esp, 0xC
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        pop edi
        mov dword ptr ds : [esi+0x258], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62de0f8 : nop
        lea eax, ss:[esp+0x20]
        push eax
        push edi
        lea ecx, ds:[esi+0x268]
        mov dword ptr ss : [esp+0x28], 0
        call public_62df360
        cmp al, 1
        jne public_62de14e
        mov ecx, dword ptr ds : [esi+0x1C0]
        mov ecx, dword ptr ds : [ecx+0xEC]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], eax
        pop edi
        mov byte ptr ds : [esi+0x255], 1
        mov dword ptr ds : [esi+0x258], edx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62de14e : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62de050)
    }
}

#undef public_62de0f8
#undef public_62de14e
