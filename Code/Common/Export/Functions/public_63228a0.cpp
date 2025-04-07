#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63228a0);
CLANG_FORWARD_PROC_SYMBOL(public_6322aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6322ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6322b00);
CLANG_FORWARD_PROC_SYMBOL(public_6323d90);
CLANG_FORWARD_PROC_SYMBOL(public_6323e50);
CLANG_FORWARD_PROC_SYMBOL(public_6323e90);
CLANG_FORWARD_PROC_SYMBOL(public_63240a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632290b _public_632290b
#define public_6322910 _public_6322910
#define public_6322918 _public_6322918
#define public_632292b _public_632292b
#define public_6322938 _public_6322938
#define public_6322954 _public_6322954
#define public_632296e _public_632296e
#define public_63229d5 _public_63229d5
#define public_6322a3c _public_6322a3c
#define public_6322a71 _public_6322a71
#define public_6322a79 _public_6322a79

PROC_DECLARE(0x63228a0, internal_63228a0, public_63228a0);
extern "C" NAKED register_t __cdecl internal_63228a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_63229d5
        test ebx, ebx
        je public_632290b
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_6322910
        public_632290b : nop
        mov ebp, 1
        public_6322910 : nop
        test ebx, ebx
        jne public_6322918
        xor edx, edx
        jmp public_632292b
        public_6322918 : nop
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_632292b : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6322938
        xor eax, eax
        public_6322938 : nop
        lea edx, ds:[eax+eax*8]
        shl edx, 4
        push edx
        call public_6391d9c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_632296e
        public_6322954 : nop
        push ebx
        push ebp
        call public_63240a0
        add ebx, 0x90
        add esp, 8
        add ebp, 0x90
        cmp ebx, edi
        jne public_6322954
        public_632296e : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_63240a0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x90
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6322b00
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6322ad0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*8]
        shl edx, 4
        add edx, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_6322aa0
        inc eax
        lea eax, ds:[eax+eax*8]
        shl eax, 4
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6322a79
        public_63229d5 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6322a3c
        lea edx, ds:[edi+0x90]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6322b00
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_6323d90
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6323e50
        add esp, 0xC
        jmp public_6322a71
        public_6322a3c : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFF70
        push ecx
        mov ecx, esi
        call public_6322b00
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFF70
        push eax
        push edi
        call public_6323e90
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x90]
        push ecx
        push edi
        call public_6323e50
        add esp, 0x18
        public_6322a71 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x90
        public_6322a79 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        lea eax, ds:[eax+eax*8]
        pop esi
        shl eax, 4
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x63228a0)
    }
}

#undef public_632290b
#undef public_6322910
#undef public_6322918
#undef public_632292b
#undef public_6322938
#undef public_6322954
#undef public_632296e
#undef public_63229d5
#undef public_6322a3c
#undef public_6322a71
#undef public_6322a79
