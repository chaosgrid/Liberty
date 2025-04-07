#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6369e70);
CLANG_FORWARD_JUMP_SYMBOL(public_6398677);

PROC_DECLARE(0x6369e70, internal_6369e70, public_6369e70);
extern "C" NAKED register_t __cdecl internal_6369e70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6398677 @0x6369e78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398677
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov edx, ecx
        xor esi, esi
        push edi
        mov word ptr ds : [edx+0x18], si
        mov word ptr ds : [edx+0x1A], si
        mov dword ptr ds : [edx+0x1C], esi
        mov word ptr ds : [edx+0x20], si
        mov word ptr ds : [edx+0x22], si
        mov dword ptr ds : [edx+0x24], esi
        mov word ptr ds : [edx+0x28], si
        mov word ptr ds : [edx+0x2A], si
        mov dword ptr ds : [edx+0x2C], esi
        mov word ptr ds : [edx+0x5C], si
        mov word ptr ds : [edx+0x5E], si
        mov dword ptr ds : [edx+0x60], esi
        mov word ptr ds : [edx+0x64], si
        mov word ptr ds : [edx+0x66], si
        mov dword ptr ds : [edx+0x68], esi
        mov word ptr ds : [edx+0x8C], si
        mov word ptr ds : [edx+0x8E], si
        mov dword ptr ds : [edx+0x90], esi
        xor eax, eax
        mov ecx, 0x25
        mov edi, edx
        rep stosd
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+0xC], esi
        mov dword ptr ds : [edx], esi
        mov eax, 0x49742400
        mov dword ptr ds : [edx+0x30], eax
        mov dword ptr ds : [edx+0x34], eax
        mov dword ptr ds : [edx+0x38], eax
        mov eax, 0xC9742400
        mov dword ptr ds : [edx+0x40], eax
        mov dword ptr ds : [edx+0x44], eax
        mov dword ptr ds : [edx+0x48], eax
        mov dword ptr ds : [edx+0x58], esi
        pop edi
        mov eax, edx
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6369e70)
    }
}
