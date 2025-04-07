#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22400);

#define public_6f22420 _public_6f22420
#define public_6f2243b _public_6f2243b
#define public_6f22456 _public_6f22456
#define public_6f22471 _public_6f22471
#define public_6f2247d _public_6f2247d
#define public_6f22495 _public_6f22495
#define public_6f224b3 _public_6f224b3
#define public_6f224dc _public_6f224dc

PROC_DECLARE(0x6f22400, internal_6f22400, public_6f22400);
extern "C" NAKED register_t __cdecl internal_6f22400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp dword ptr ss : [esp+4], eax
        je public_6f224dc
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[eax+0x38]
        xor ecx, ecx
        nop 
        lea esp, ss:[esp]
        public_6f22420 : nop
        sub eax, 0x74
        sub ebp, 0x74
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[ebp-0x34]
        sub edx, 0x74
        test eax, eax
        jne public_6f2243b
        mov dword ptr ds : [edx], ecx
        mov byte ptr ds : [edx+4], cl
        jmp public_6f22471
        public_6f2243b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ss:[ebp-0x34]
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f22456
        mov eax, 0x2F
        public_6f22456 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx+4]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+edx+4], cl
        mov dword ptr ds : [edx], eax
        public_6f22471 : nop
        cmp ebp, ecx
        jne public_6f2247d
        mov dword ptr ds : [edx+0x34], ecx
        mov byte ptr ds : [edx+0x38], cl
        jmp public_6f224b3
        public_6f2247d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f22495
        mov eax, 0x2F
        public_6f22495 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx+0x38]
        mov esi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [edx+eax+0x38], cl
        mov dword ptr ds : [edx+0x34], eax
        public_6f224b3 : nop
        mov eax, dword ptr ss : [ebp+0x30]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x68], eax
        mov eax, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [edx+0x6C], eax
        mov eax, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [edx+0x70], eax
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        jne public_6f22420
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        ret 
        public_6f224dc : nop
        mov eax, dword ptr ss : [esp+0xC]
        ret 
        UNREACHABLE_TRAP(0x6f22400)
    }
}

#undef public_6f22420
#undef public_6f2243b
#undef public_6f22456
#undef public_6f22471
#undef public_6f2247d
#undef public_6f22495
#undef public_6f224b3
#undef public_6f224dc
