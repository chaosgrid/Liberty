#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bde990);

#define public_6bdea16 _public_6bdea16

PROC_DECLARE(0x6bde990, internal_6bde990, public_6bde990);
extern "C" NAKED register_t __cdecl internal_6bde990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6bdea16
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dx, word ptr ds : [ecx+0xC]
        mov word ptr ds : [eax+0xC], dx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+0x20], edx
        mov edx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+0x24], edx
        mov edx, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [eax+0x28], edx
        mov edx, dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [eax+0x2C], edx
        mov edx, dword ptr ds : [ecx+0x30]
        mov dword ptr ds : [eax+0x30], edx
        push esi
        push edi
        lea edx, ds:[ecx+0x34]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x34]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov dl, byte ptr ds : [ecx+0x44]
        mov byte ptr ds : [eax+0x44], dl
        mov cl, byte ptr ds : [ecx+0x45]
        pop edi
        mov byte ptr ds : [eax+0x45], cl
        pop esi
        public_6bdea16 : nop
        ret 
        UNREACHABLE_TRAP(0x6bde990)
    }
}

#undef public_6bdea16
