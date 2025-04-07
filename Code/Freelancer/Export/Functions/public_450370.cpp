#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450440);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_4503b0 _public_4503b0

PROC_DECLARE(0x450370, internal_450370, public_450370);
extern "C" NAKED register_t __cdecl internal_450370()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], 0
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, offset public_66d000
        mov esi, offset public_66cb00
        mov eax, offset public_668b20
        mov dword ptr ss : [esp+0x10], 0x100
        xor ecx, ecx
        lea esp, ss:[esp]
        public_4503b0 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax-0x20], ecx
        lea ebx, ds:[eax-0x1C]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax-4], ecx
        mov dword ptr ds : [eax-8], ecx
        mov dword ptr ds : [eax-0xC], ecx
        mov ebx, 0x3F800000
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax-0x10], ebx
        mov ebx, dword ptr ss : [esp+0x10]
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
        jne public_4503b0
/*FIXUP push offset _public_450440 @0x45041a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_450440
        mov dword ptr ds : [public_66d100], 0xFFFFFFFF
        call public_5b7e6c
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x450370)
    }
}

#undef public_4503b0
