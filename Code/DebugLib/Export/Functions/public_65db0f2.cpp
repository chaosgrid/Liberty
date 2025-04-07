#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65daa26);
CLANG_FORWARD_PROC_SYMBOL(public_65dacdb);
CLANG_FORWARD_PROC_SYMBOL(public_65db0f2);

#define public_65db131 _public_65db131
#define public_65db1a4 _public_65db1a4
#define public_65db1aa _public_65db1aa
#define public_65db1ae _public_65db1ae
#define public_65db1b1 _public_65db1b1

PROC_DECLARE(0x65db0f2, internal_65db0f2, public_65db0f2);
extern "C" NAKED register_t __cdecl internal_65db0f2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        sub ebx, 0x76C
        cmp ebx, 0x46
        jl public_65db1ae
        cmp ebx, 0x8A
        jg public_65db1ae
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [edi*4+public_65e5c20]
        add esi, dword ptr ss : [ebp+0x10]
        test bl, 3
        jne public_65db131
        cmp edi, 2
        jle public_65db131
        inc esi
        public_65db131 : nop
        call public_65daa26
        mov eax, ebx
        lea ecx, ds:[ebx-1]
        imul eax, 0x16D
        sar ecx, 2
        mov edx, esi
        mov dword ptr ss : [ebp-8], esi
        add edx, ecx
        mov dword ptr ss : [ebp-0x10], ebx
        add eax, edx
        mov edx, dword ptr ss : [ebp+0x1C]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-0x1C], eax
        lea ecx, ds:[eax+ecx*8]
        imul ecx, 0x3C
        add ecx, dword ptr ss : [ebp+0x18]
        imul ecx, 0x3C
        add ecx, dword ptr ds : [public_65e345c]
        dec edi
        cmp dword ptr ss : [ebp+0x20], 1
        mov dword ptr ss : [ebp-0x14], edi
        pop edi
        pop esi
        lea ecx, ds:[ecx+edx+0x7C558180]
        mov dword ptr ss : [ebp+8], ecx
        je public_65db1a4
        cmp dword ptr ss : [ebp+0x20], 0xFFFFFFFF
        jne public_65db1aa
        cmp dword ptr ds : [public_65e3460], 0
        je public_65db1aa
        lea eax, ss:[ebp-0x24]
        push eax
        call public_65dacdb
        pop ecx
        mov ecx, dword ptr ss : [ebp+8]
        test eax, eax
        je public_65db1aa
        public_65db1a4 : nop
        add ecx, dword ptr ds : [public_65e3464]
        public_65db1aa : nop
        mov eax, ecx
        jmp public_65db1b1
        public_65db1ae : nop
        or eax, 0xFFFFFFFF
        public_65db1b1 : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65db0f2)
    }
}

#undef public_65db131
#undef public_65db1a4
#undef public_65db1aa
#undef public_65db1ae
#undef public_65db1b1
