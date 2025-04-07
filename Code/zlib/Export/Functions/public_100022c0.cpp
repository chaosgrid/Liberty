#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100022c0);
CLANG_FORWARD_PROC_SYMBOL(public_10003030);

PROC_DECLARE(0x100022c0, internal_100022c0, public_100022c0);
extern "C" NAKED register_t __cdecl internal_100022c0()
{
    __asm
    {
        mov eax, dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ds : [edx+0x44]
        shl eax, 1
        mov dword ptr ds : [edx+0x34], eax
        mov eax, dword ptr ds : [edx+0x3C]
        push ebx
        push esi
        xor esi, esi
        mov word ptr ds : [eax+ecx*2-2], si
        mov ecx, dword ptr ds : [edx+0x44]
        lea ecx, ds:[ecx+ecx-2]
        mov ebx, ecx
        shr ecx, 2
        push edi
        mov edi, dword ptr ds : [edx+0x3C]
        xor eax, eax
        rep stosd
        mov ecx, ebx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ds : [edx+0x7C]
        lea eax, ds:[eax+eax*2]
        shl eax, 2
        movzx ecx, word ptr ds : [eax+public_1000b0ba]
        mov dword ptr ds : [edx+0x78], ecx
        movzx ecx, word ptr ds : [eax+public_1000b0b8]
        mov dword ptr ds : [edx+0x84], ecx
        movzx ecx, word ptr ds : [eax+public_1000b0bc]
        mov dword ptr ds : [edx+0x88], ecx
        movzx eax, word ptr ds : [eax+public_1000b0be]
        pop edi
        mov dword ptr ds : [edx+0x74], eax
        mov dword ptr ds : [edx+0x64], esi
        mov dword ptr ds : [edx+0x54], esi
        mov dword ptr ds : [edx+0x6C], esi
        mov eax, 2
        mov dword ptr ds : [edx+0x60], esi
        mov dword ptr ds : [edx+0x40], esi
        pop esi
        mov dword ptr ds : [edx+0x70], eax
        mov dword ptr ds : [edx+0x58], eax
        pop ebx
        jmp public_10003030
        UNREACHABLE_TRAP(0x100022c0)
    }
}
