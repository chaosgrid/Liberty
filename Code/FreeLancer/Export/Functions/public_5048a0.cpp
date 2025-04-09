#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5048a0);

#define public_5048c2 _public_5048c2

PROC_DECLARE(0x5048a0, internal_5048a0, public_5048a0);
extern "C" NAKED register_t __cdecl internal_5048a0()
{
    __asm
    {
        push ebx
        push ebp
        mov eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        lea ecx, ds:[eax+4]
        push edi
        mov edx, ecx
        sub edx, eax
        mov edi, eax
        lea edx, ds:[edx+esi+8]
        sub edi, esi
        mov ebx, 5
        public_5048c2 : nop
        mov ebp, dword ptr ds : [edx-8]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [edx-4]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ds : [edi+edx], ebp
        add ecx, 0xC
        add edx, 0xC
        dec ebx
        jne public_5048c2
        mov ecx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [eax+0x40], ecx
        mov edx, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [eax+0x44], edx
        mov ecx, dword ptr ds : [esi+0x48]
        mov dword ptr ds : [eax+0x48], ecx
        mov edx, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [eax+0x4C], edx
        mov ecx, dword ptr ds : [esi+0x50]
        mov dword ptr ds : [eax+0x50], ecx
        mov edx, dword ptr ds : [esi+0x54]
        mov dword ptr ds : [eax+0x54], edx
        mov ecx, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [eax+0x58], ecx
        mov edx, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [eax+0x5C], edx
        lea ecx, ds:[esi+0x60]
        mov di, word ptr ds : [ecx]
        lea edx, ds:[eax+0x60]
        mov word ptr ds : [edx], di
        mov cl, byte ptr ds : [ecx+2]
        mov byte ptr ds : [edx+2], cl
        add esi, 0x63
        mov cx, word ptr ds : [esi]
        lea edx, ds:[eax+0x63]
        pop edi
        mov word ptr ds : [edx], cx
        mov cl, byte ptr ds : [esi+2]
        pop esi
        pop ebp
        mov byte ptr ds : [edx+2], cl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5048a0)
    }
}

#undef public_5048c2
