#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8060);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ace0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7acef _public_6f7acef
#define public_6f7ad05 _public_6f7ad05
#define public_6f7ad17 _public_6f7ad17
#define public_6f7ad40 _public_6f7ad40
#define public_6f7ad54 _public_6f7ad54
#define public_6f7ad60 _public_6f7ad60
#define public_6f7ad6e _public_6f7ad6e
#define public_6f7ada8 _public_6f7ada8
#define public_6f7adcd _public_6f7adcd

PROC_DECLARE(0x6f7ace0, internal_6f7ace0, public_6f7ace0);
extern "C" NAKED register_t __cdecl internal_6f7ace0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f7acef
        xor edx, edx
        jmp public_6f7ad05
        public_6f7acef : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7ad05 : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp edx, eax
        jae public_6f7adcd
        test eax, eax
        jge public_6f7ad17
        xor eax, eax
        public_6f7ad17 : nop
        push ebx
        push ebp
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push edi
        push ecx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_6f7ad54
        lea esp, ss:[esp]
        public_6f7ad40 : nop
        push edi
        push ebx
        call public_6ef8060
        add edi, 0x14
        add esp, 8
        add ebx, 0x14
        cmp edi, ebp
        jne public_6f7ad40
        public_6f7ad54 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_6f7ad6e
        mov edi, edi
        public_6f7ad60 : nop
        mov ecx, edi
        call public_6eec8d0
        add edi, 0x14
        cmp edi, ebx
        jne public_6f7ad60
        public_6f7ad6e : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[edi+eax*4]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6f7ada8
        xor edx, edx
        lea ecx, ds:[edx+edx*4]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ecx
        ret 4
        public_6f7ada8 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea ecx, ds:[edx+edx*4]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop ebp
        mov dword ptr ds : [esi+8], edx
        pop ebx
        public_6f7adcd : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f7ace0)
    }
}

#undef public_6f7acef
#undef public_6f7ad05
#undef public_6f7ad17
#undef public_6f7ad40
#undef public_6f7ad54
#undef public_6f7ad60
#undef public_6f7ad6e
#undef public_6f7ada8
#undef public_6f7adcd
