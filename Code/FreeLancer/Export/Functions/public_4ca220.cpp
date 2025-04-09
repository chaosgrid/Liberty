#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca220);

#define public_4ca244 _public_4ca244
#define public_4ca266 _public_4ca266
#define public_4ca283 _public_4ca283

PROC_DECLARE(0x4ca220, internal_4ca220, public_4ca220);
extern "C" NAKED register_t __cdecl internal_4ca220()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        lea edx, ss:[ebp+2]
        imul edx, 0x94
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        add edx, ebx
        test esi, esi
        jne public_4ca244
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        jmp public_4ca283
        public_4ca244 : nop
        or ecx, 0xFFFFFFFF
        push edi
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x80
        mov dword ptr ss : [esp+0x14], ecx
        jb public_4ca266
        mov ecx, 0x7F
        mov dword ptr ss : [esp+0x14], ecx
        public_4ca266 : nop
        mov eax, ecx
        shr ecx, 2
        lea edi, ds:[edx+4]
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x14]
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx+4], 0
        mov dword ptr ds : [edx], eax
        pop edi
        public_4ca283 : nop
        mov ecx, ebp
        imul ecx, 0x94
        lea eax, ds:[ecx+ebx]
        mov ecx, dword ptr ds : [public_5c6dd8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1AC], ecx
        lea edx, ds:[eax+0x1AC]
        lea ecx, ds:[eax+0x12C]
        mov dword ptr ds : [eax+0x1B0], ecx
        lea ecx, ss:[ebp+ebp*2]
        lea ecx, ds:[ebx+ecx*8]
        mov dword ptr ds : [ecx+0x6C], edx
        xor edx, edx
        mov dword ptr ds : [ecx+0x70], edx
        mov dword ptr ds : [ecx+0x74], edx
        pop esi
        lea edx, ss:[ebp+ebp*2+0xF]
        mov dword ptr ds : [ecx+0x68], 1
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr ds : [ebx+edx*8], 1
        mov dword ptr ds : [eax+0x1B8], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4ca220)
    }
}

#undef public_4ca244
#undef public_4ca266
#undef public_4ca283
