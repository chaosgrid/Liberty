#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346870);
CLANG_FORWARD_PROC_SYMBOL(public_6347550);
CLANG_FORWARD_PROC_SYMBOL(public_6347660);
CLANG_FORWARD_PROC_SYMBOL(public_63477c0);
CLANG_FORWARD_PROC_SYMBOL(public_6349400);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6350fb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6397b96);

PROC_DECLARE(0x6347660, internal_6347660, public_6347660);
extern "C" NAKED register_t __cdecl internal_6347660()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397b96 @0x6347662*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397b96
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        call public_63477c0
        xor ebp, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov word ptr ds : [esi+0x150], bp
        mov word ptr ds : [esi+0x152], bp
        mov dword ptr ds : [esi+0x154], ebp
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x20], 1
        call public_6347550
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+0x15C]
        and ecx, 3
        shl ecx, 2
        and edx, 0xFFFFFFF3
        or ecx, edx
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        call public_6349400
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edx]
        lea ebx, ds:[esi+0xD4]
        mov eax, ebx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edx+0xC]
        mov ecx, ebx
        mov dword ptr ds : [eax+0xC], edx
        call public_6350fb0
        mov edi, dword ptr ss : [esp+0x2C]
        mov ecx, ebx
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0xE4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+8]
        fstp dword ptr ds : [esi+0xB4]
        lea ecx, ds:[esi+0xF4]
        fstp dword ptr ds : [esi+0xB8]
        mov eax, edx
        mov dword ptr ds : [esi+0xBC], eax
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ds : [esi+0xC4], ebp
        mov dword ptr ds : [esi+0xC8], ebp
        mov dword ptr ds : [esi+0xCC], ebp
        call public_6350bc0
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+8]
        fstp dword ptr ds : [esi+0x124]
        mov eax, edx
        fstp dword ptr ds : [esi+0x128]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ds : [esi+0x12C], eax
        push 0x447A0000
        push 0x447A0000
        mov ecx, esi
        call public_6346870
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [esp+0x34]
        mov ecx, eax
        xor ecx, ebx
        and ecx, 3
        xor ecx, eax
        pop edi
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x6347660)
    }
}
