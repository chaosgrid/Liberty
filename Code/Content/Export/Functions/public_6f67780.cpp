#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f67780);

#define public_6f677c0 _public_6f677c0
#define public_6f677f1 _public_6f677f1
#define public_6f677ff _public_6f677ff
#define public_6f67801 _public_6f67801
#define public_6f67807 _public_6f67807
#define public_6f67825 _public_6f67825

PROC_DECLARE(0x6f67780, internal_6f67780, public_6f67780);
extern "C" NAKED register_t __cdecl internal_6f67780()
{
    __asm
    {
        sub esp, 0x18
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [public_6fd1bb0]
        push ebp
        mov ebp, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ds : [public_6fd1bac]
        sub ecx, esi
        mov dword ptr ss : [esp+0xC], edx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ecx, edx
        test ecx, ecx
        mov dword ptr ss : [esp+8], ebp
        jle public_6f67807
        push ebx
        push edi
        nop 
        public_6f677c0 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        lea edx, ds:[eax+eax*2]
        lea edi, ds:[esi+edx*4]
        mov ebp, edi
        mov edx, dword ptr ss : [ebp]
        mov ebx, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x24], ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp edx, ebp
        jb public_6f677f1
        ja public_6f677ff
        cmp ebx, dword ptr ss : [esp+0x14]
        setb dl
        test dl, dl
        je public_6f677ff
        public_6f677f1 : nop
        mov edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[edi+0xC]
        add ecx, edx
        jmp public_6f67801
        public_6f677ff : nop
        mov ecx, eax
        public_6f67801 : nop
        test ecx, ecx
        jg public_6f677c0
        pop edi
        pop ebx
        public_6f67807 : nop
        cmp esi, dword ptr ds : [public_6fd1bb0]
        je public_6f67825
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f67825
        cmp ebp, dword ptr ds : [esi]
        jne public_6f67825
        fld dword ptr ds : [esi+8]
        pop esi
        pop ebp
        add esp, 0x18
        ret 
        public_6f67825 : nop
        fld dword ptr ds : [public_6fb5e84]
        pop esi
        pop ebp
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f67780)
    }
}

#undef public_6f677c0
#undef public_6f677f1
#undef public_6f677ff
#undef public_6f67801
#undef public_6f67807
#undef public_6f67825
