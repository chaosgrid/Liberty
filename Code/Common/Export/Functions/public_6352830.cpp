#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352830);

#define public_6352842 _public_6352842
#define public_635285e _public_635285e
#define public_6352863 _public_6352863
#define public_635288d _public_635288d
#define public_635289e _public_635289e
#define public_63528b4 _public_63528b4
#define public_63528c0 _public_63528c0
#define public_63528ca _public_63528ca
#define public_63528e3 _public_63528e3
#define public_63528fa _public_63528fa

PROC_DECLARE(0x6352830, internal_6352830, public_6352830);
extern "C" NAKED register_t __cdecl internal_6352830()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov edx, esi
        push edi
        and edx, ebx
        public_6352842 : nop
        lea edi, ds:[edx+edx*2]
        mov ebp, dword ptr ds : [eax+edi*4]
        lea edi, ds:[eax+edi*4]
        or ebp, 0x80000000
        cmp ebp, ebx
        jne public_635285e
        mov ebp, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi+4], ebp
        je public_6352863
        public_635285e : nop
        inc edx
        and edx, esi
        jmp public_6352842
        public_6352863 : nop
        mov edi, dword ptr ds : [edi+8]
        mov ebp, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], edi
        dec ebp
        lea edi, ds:[esi+esi*2]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [eax+edi*4+4]
        test ebx, ebx
        lea edi, ds:[eax+edi*4]
        mov ebp, edx
        mov dword ptr ss : [esp+0x18], esi
        je public_635288d
        mov edi, dword ptr ds : [edi]
        and edi, esi
        mov dword ptr ss : [esp+0x18], edi
        public_635288d : nop
        inc edx
        and edx, esi
        lea edi, ds:[edx+edx*2]
        mov ebx, dword ptr ds : [eax+edi*4+4]
        test ebx, ebx
        lea edi, ds:[eax+edi*4]
        je public_63528fa
        public_635289e : nop
        mov ebx, dword ptr ds : [edi]
        and ebx, esi
        cmp edx, ebp
        jle public_63528c0
        mov esi, dword ptr ss : [esp+0x18]
        cmp ebx, esi
        jge public_63528b4
        cmp ebx, ebp
        jg public_63528e3
        jmp public_63528ca
        public_63528b4 : nop
        jne public_63528ca
        cmp ebx, edx
        jg public_63528ca
        cmp ebx, ebp
        jg public_63528e3
        jmp public_63528ca
        public_63528c0 : nop
        cmp ebp, esi
        jne public_63528fa
        cmp ebx, dword ptr ss : [esp+0x18]
        jl public_63528e3
        public_63528ca : nop
        lea esi, ss:[ebp+ebp*2]
        lea eax, ds:[eax+esi*4]
        mov esi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], esi
        mov ebp, edx
        public_63528e3 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx+0xC]
        inc edx
        and edx, esi
        lea edi, ds:[edx+edx*2]
        mov ebx, dword ptr ds : [eax+edi*4+4]
        test ebx, ebx
        lea edi, ds:[eax+edi*4]
        jne public_635289e
        public_63528fa : nop
        mov edx, dword ptr ds : [ecx+0xC]
        lea ebp, ss:[ebp+ebp*2]
        shl ebp, 2
        mov dword ptr ds : [edx+ebp+4], 0
        mov eax, dword ptr ds : [ecx+0xC]
        pop edi
        pop esi
        mov dword ptr ds : [eax+ebp], 0
        mov eax, dword ptr ss : [esp+0xC]
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6352830)
    }
}

#undef public_6352842
#undef public_635285e
#undef public_6352863
#undef public_635288d
#undef public_635289e
#undef public_63528b4
#undef public_63528c0
#undef public_63528ca
#undef public_63528e3
#undef public_63528fa
