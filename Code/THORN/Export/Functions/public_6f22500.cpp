#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22500);
CLANG_FORWARD_PROC_SYMBOL(public_6f22600);
CLANG_FORWARD_PROC_SYMBOL(public_6f22630);

#define public_6f22595 _public_6f22595

PROC_DECLARE(0x6f22500, internal_6f22500, public_6f22500);
extern "C" NAKED register_t __cdecl internal_6f22500()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+0x5C], al
        test al, al
        mov eax, dword ptr ds : [esi+0x10]
        je public_6f22595
        mov edx, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [esi+0x18]
        add eax, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x58], eax
        lea edx, ds:[edx+edx*2]
        lea edx, ds:[ecx+edx*4]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[ecx+eax*4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [esi+0x18]
        inc eax
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ecx+eax*4]
        mov eax, dword ptr ds : [esi+0x58]
        inc eax
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[ecx+eax*4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [esi+0x58]
        mov eax, dword ptr ds : [esi+0x18]
        lea ecx, ds:[ecx+ecx*2]
        lea edx, ds:[eax+ecx*4-0xC]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov ecx, esi
        mov dword ptr ds : [eax+8], edx
        call public_6f22630
        fstp st(0)
        mov ecx, esi
        call public_6f22600
        pop esi
        ret 4
        public_6f22595 : nop
        mov ecx, dword ptr ds : [esi+0x54]
        sub eax, 3
        mov dword ptr ds : [esi+0x58], eax
        mov eax, dword ptr ds : [esi+0x18]
        lea ecx, ds:[ecx+ecx*2]
        lea edx, ds:[eax+ecx*4]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [esi+0x58]
        mov ecx, dword ptr ds : [esi+0x18]
        lea edx, ds:[eax+eax*2]
        lea edx, ds:[ecx+edx*4]
        lea eax, ds:[eax+eax*2+3]
        lea ecx, ds:[ecx+eax*4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call public_6f22630
        fstp st(0)
        mov ecx, esi
        call public_6f22600
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f22500)
    }
}

#undef public_6f22595
