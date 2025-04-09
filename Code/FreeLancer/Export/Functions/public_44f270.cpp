#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f270);

#define public_44f284 _public_44f284
#define public_44f306 _public_44f306

PROC_DECLARE(0x44f270, internal_44f270, public_44f270);
extern "C" NAKED register_t __cdecl internal_44f270()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x3C]
        xor bl, bl
        test eax, eax
        jne public_44f284
        pop ebp
        xor al, al
        pop ebx
        ret 8
        public_44f284 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        cmp dword ptr ds : [eax], 3
        jne public_44f306
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+0x18]
        add edx, ecx
        mov dword ptr ds : [esi+0xC], edx
        mov ecx, dword ptr ds : [eax+8]
        shr ecx, 3
        and cl, 1
        mov byte ptr ds : [esi+0x10], cl
        mov edi, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [ebp+0x3C]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0x24]
        cmp dword ptr ds : [eax], 6
        jne public_44f306
        test byte ptr ds : [eax+4], 1
        jne public_44f306
        mov ecx, dword ptr ds : [eax+4]
        shr ecx, 1
        and cl, 1
        mov byte ptr ds : [esi+0x11], cl
        mov edx, dword ptr ds : [public_611004]
        mov eax, dword ptr ds : [eax+0x3C]
        push edx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_44f306
        mov eax, dword ptr ss : [ebp+0x48]
        mov eax, dword ptr ds : [eax+edi*4]
        test eax, eax
        je public_44f306
        mov ecx, dword ptr ds : [eax+0x7C]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], eax
        mov bl, 1
        public_44f306 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x44f270)
    }
}

#undef public_44f284
#undef public_44f306
