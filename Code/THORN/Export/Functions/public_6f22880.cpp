#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22600);
CLANG_FORWARD_PROC_SYMBOL(public_6f22630);
CLANG_FORWARD_PROC_SYMBOL(public_6f22880);

#define public_6f228a6 _public_6f228a6
#define public_6f2292e _public_6f2292e
#define public_6f22984 _public_6f22984
#define public_6f2299a _public_6f2299a

PROC_DECLARE(0x6f22880, internal_6f22880, public_6f22880);
extern "C" NAKED register_t __cdecl internal_6f22880()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, dword ptr ds : [esi+0x10]
        lea eax, ds:[ecx+1]
        jae public_6f2299a
        mov cl, byte ptr ds : [esi+0x5C]
        test cl, cl
        je public_6f2292e
        cmp eax, dword ptr ds : [esi+0x58]
        jne public_6f228a6
        mov eax, dword ptr ds : [esi+0x54]
        public_6f228a6 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ecx+eax*4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [esi+0x54]
        mov eax, dword ptr ds : [esi+0x18]
        lea ecx, ds:[ecx+ecx*2]
        lea edx, ds:[eax+ecx*4]
        mov ecx, dword ptr ds : [esi+0x58]
        lea ecx, ds:[ecx+ecx*2]
        lea eax, ds:[eax+ecx*4]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
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
        mov dword ptr ds : [eax+8], edx
        jmp public_6f22984
        public_6f2292e : nop
        mov ecx, dword ptr ds : [esi+0x18]
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ecx+eax*4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [esi+0x18]
        lea ecx, ds:[eax+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
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
        public_6f22984 : nop
        mov ecx, esi
        call public_6f22630
        fstp st(0)
        mov ecx, esi
        call public_6f22600
        xor eax, eax
        pop esi
        ret 8
        public_6f2299a : nop
        mov eax, 0xFFFFFFFE
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f22880)
    }
}

#undef public_6f228a6
#undef public_6f2292e
#undef public_6f22984
#undef public_6f2299a
