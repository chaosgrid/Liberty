#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450440);

#define public_450480 _public_450480
#define public_450500 _public_450500

PROC_DECLARE(0x450440, internal_450440, public_450440);
extern "C" NAKED register_t __cdecl internal_450440()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], 0
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], 0
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, offset public_668b20
        mov dword ptr ss : [esp+0x10], 0x100
        xor ecx, ecx
        mov edi, 0x3F800000
        nop 
        public_450480 : nop
        mov dword ptr ds : [eax-0x20], ecx
        lea ebp, ds:[eax-0x1C]
        mov dword ptr ss : [ebp], esi
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], ebx
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x10], edi
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax-0x10], edi
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax-4], ecx
        mov dword ptr ds : [eax-8], ecx
        mov dword ptr ds : [eax-0xC], ecx
        mov dword ptr ds : [eax+0x14], 0x420C0000
        mov dword ptr ds : [eax+0x18], 0x3E800000
        mov dword ptr ds : [eax+0x1C], 0x49742400
        add eax, 0x40
        dec ebp
        mov dword ptr ss : [esp+0x10], ebp
        jne public_450480
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, offset public_66d000
        mov esi, offset public_66cb00
        mov eax, offset public_668b20
        mov dword ptr ss : [esp+0x10], 0x100
        nop 
        lea esp, ss:[esp]
        public_450500 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax-0x20], ecx
        lea ebx, ds:[eax-0x1C]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+8], ebp
        mov ebx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x10], edi
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax-0x10], edi
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax-4], ecx
        mov dword ptr ds : [eax-8], ecx
        mov dword ptr ds : [eax-0xC], ecx
        mov dword ptr ds : [eax+0x14], 0x420C0000
        mov dword ptr ds : [eax+0x18], 0x3E800000
        mov dword ptr ds : [eax+0x1C], 0x49742400
        mov dword ptr ds : [esi], 0xFFFFFFFF
        add esi, 4
        add eax, 0x40
        mov byte ptr ds : [edx-0x100], cl
        mov byte ptr ds : [edx], cl
        inc edx
        dec ebx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_450500
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [public_66d100], 0xFFFFFFFF
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x450440)
    }
}

#undef public_450480
#undef public_450500
