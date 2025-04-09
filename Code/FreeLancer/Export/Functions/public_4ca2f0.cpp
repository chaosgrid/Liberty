#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca2f0);

#define public_4ca310 _public_4ca310
#define public_4ca321 _public_4ca321
#define public_4ca341 _public_4ca341
#define public_4ca35a _public_4ca35a

PROC_DECLARE(0x4ca2f0, internal_4ca2f0, public_4ca2f0);
extern "C" NAKED register_t __cdecl internal_4ca2f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        lea ebx, ds:[ecx+0x110]
        lea edx, ds:[ecx+0x538]
        mov dword ptr ss : [esp+0x10], 7
        lea esp, ss:[esp]
        public_4ca310 : nop
        lea eax, ds:[edx-0x94]
        test eax, eax
        jne public_4ca321
        mov dword ptr ds : [edx-4], eax
        mov byte ptr ds : [edx], al
        jmp public_4ca35a
        public_4ca321 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ds:[edx-0x94]
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x80
        jb public_4ca341
        mov eax, 0x7F
        public_4ca341 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov byte ptr ds : [edx+eax], 0
        mov dword ptr ds : [edx-4], eax
        public_4ca35a : nop
        mov ecx, dword ptr ds : [edx-8]
        mov dword ptr ds : [edx+0x8C], ecx
        lea eax, ds:[edx+0x80]
        lea ecx, ds:[edx-0x14]
        mov edi, dword ptr ds : [ecx]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], ecx
        lea ebp, ds:[ebx-0x18]
        mov edi, ebx
        mov ecx, 6
        mov esi, ebp
        rep movsd
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0x84], edx
        sub edx, 0x94
        dec eax
        mov ebx, ebp
        mov dword ptr ss : [esp+0x10], eax
        jne public_4ca310
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4ca2f0)
    }
}

#undef public_4ca310
#undef public_4ca321
#undef public_4ca341
#undef public_4ca35a
