#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46eab0);
CLANG_FORWARD_PROC_SYMBOL(public_46ecd0);

#define public_46eb0c _public_46eb0c
#define public_46eb0f _public_46eb0f

PROC_DECLARE(0x46eab0, internal_46eab0, public_46eab0);
extern "C" NAKED register_t __cdecl internal_46eab0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x29]
        test al, al
        je public_46eb0f
        mov eax, dword ptr ds : [ebx+0x2C]
        and eax, 3
        cmp al, 3
        jne public_46eb0c
        mov eax, dword ptr ds : [ebx+8]
        push esi
        add eax, 2
        push edi
        mov dword ptr ds : [ebx+8], eax
        call public_46ecd0
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[eax+eax*2-0xF]
        lea esi, ds:[ecx+edx*8]
        lea eax, ds:[eax+eax*2-6]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 6
        rep movsd
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[eax+eax*2-9]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+edx*8]
        lea edi, ds:[ecx+eax*8-0x18]
        mov ecx, 6
        rep movsd
        pop edi
        pop esi
        public_46eb0c : nop
        inc dword ptr ds : [ebx+0x2C]
        public_46eb0f : nop
        mov eax, dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [ebx+0x30]
        mov byte ptr ds : [edx+ecx*8+0xE], al
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [ebx+0x31]
        mov byte ptr ds : [edx+ecx*8+0xD], al
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [ebx+0x32]
        mov byte ptr ds : [edx+ecx*8+0xC], al
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[eax+eax*2]
        mov al, byte ptr ds : [ebx+0x33]
        mov byte ptr ds : [edx+ecx*8+0xF], al
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [ebx+0x34]
        mov dword ptr ds : [edx+ecx*8+0x10], eax
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [ebx+0x38]
        mov dword ptr ds : [edx+ecx*8+0x14], eax
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[eax+eax*2]
        fstp dword ptr ds : [edx+ecx*8]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0xC]
        lea eax, ds:[eax+eax*2]
        fstp dword ptr ds : [ecx+eax*8+4]
        mov eax, dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+0x10]
        lea edx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [ebx+4]
        fstp dword ptr ds : [eax+edx*8+8]
        mov edx, dword ptr ds : [ebx+8]
        inc edx
        mov ecx, ebx
        mov dword ptr ds : [ebx+8], edx
        call public_46ecd0
        mov eax, dword ptr ds : [ebx+8]
        dec eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x46eab0)
    }
}

#undef public_46eb0c
#undef public_46eb0f
