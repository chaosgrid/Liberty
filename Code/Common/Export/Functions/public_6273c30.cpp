#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273c30);

#define public_6273ca7 _public_6273ca7
#define public_6273d30 _public_6273d30

PROC_DECLARE(0x6273c30, internal_6273c30, public_6273c30);
extern "C" NAKED register_t __cdecl internal_6273c30()
{
    __asm
    {
        sub esp, 0x10
        mov dword ptr ss : [esp+4], 0x3F800000
        mov edx, dword ptr ss : [esp+4]
        push ebx
        mov eax, ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        push ebp
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        mov dword ptr ds : [eax+8], edx
        xor edx, edx
        push edi
        mov edi, 0x3F800000
        mov dword ptr ds : [ecx+0xC], 0x40000000
        mov dword ptr ds : [ecx+0x10], 0x3DCCCCCD
        mov dword ptr ds : [ecx+0x14], 0x3E4CCCCD
        mov dword ptr ds : [ecx+0x18], edi
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], edx
        lea esi, ds:[ecx+0x120]
        lea eax, ds:[ecx+0x23C]
        mov dword ptr ss : [esp+0x10], 0x40
        public_6273ca7 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi-0x100], edx
        mov dword ptr ds : [esi], edx
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
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax-4], edx
        mov dword ptr ds : [eax-8], edx
        mov dword ptr ds : [eax-0xC], edx
        add esi, 4
        add eax, 0x30
        dec ebx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6273ca7
        mov dword ptr ds : [ecx+0xE20], edx
        mov dword ptr ds : [ecx+0xE24], edx
        mov dword ptr ds : [ecx+0xE28], edx
        mov dword ptr ss : [esp+0x18], 0
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ds:[ecx+0xE48]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, 0x40
        lea ebx, ds:[ebx]
        public_6273d30 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        lea ebx, ds:[eax-0x1C]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [eax+0x10], edi
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax-0x10], edi
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax-4], edx
        mov dword ptr ds : [eax-8], edx
        mov dword ptr ds : [eax-0xC], edx
        add eax, 0x30
        dec ecx
        jne public_6273d30
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6273c30)
    }
}

#undef public_6273ca7
#undef public_6273d30
