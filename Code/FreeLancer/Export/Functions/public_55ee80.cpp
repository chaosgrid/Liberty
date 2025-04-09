#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55ee80);

#define public_55ef04 _public_55ef04

PROC_DECLARE(0x55ee80, internal_55ee80, public_55ee80);
extern "C" NAKED register_t __cdecl internal_55ee80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        xor ebx, ebx
        push ebx
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x98]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x1C]
        cmp ebp, ebx
        lea edx, ds:[edi+0xA8]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        je public_55ef04
        lea esi, ds:[edi+0x2F8]
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        je public_55ef04
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        cmp eax, ebx
        je public_55ef04
        mov edx, dword ptr ds : [eax]
        push esi
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        public_55ef04 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[edi+0xB4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dl, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        mov byte ptr ds : [edi+0x348], dl
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edi+0x32C], eax
        mov eax, dword ptr ss : [esp+0x30]
        setne cl
        mov byte ptr ds : [edi+0x34A], cl
        mov dword ptr ds : [edi+0x340], edx
        mov dword ptr ds : [edi+0x344], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x20
        UNREACHABLE_TRAP(0x55ee80)
    }
}

#undef public_55ef04
