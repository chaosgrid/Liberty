#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dcd6d);

#define public_65dcda7 _public_65dcda7
#define public_65dcdbc _public_65dcdbc
#define public_65dcdc8 _public_65dcdc8
#define public_65dcdca _public_65dcdca
#define public_65dcded _public_65dcded
#define public_65dcdf4 _public_65dcdf4
#define public_65dcdf9 _public_65dcdf9
#define public_65dce02 _public_65dce02
#define public_65dce07 _public_65dce07
#define public_65dce0e _public_65dce0e

PROC_DECLARE(0x65dcd6d, internal_65dcd6d, public_65dcd6d);
extern "C" NAKED register_t __cdecl internal_65dcd6d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        movzx ecx, byte ptr ds : [edx]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-4], 0
        mov eax, ebx
        sub eax, dword ptr ds : [edi+0x10]
        sar eax, 0xC
        cmp ecx, dword ptr ss : [ebp+0x14]
        lea edi, ds:[edi+eax*8+0x18]
        jbe public_65dcda7
        mov eax, dword ptr ss : [ebp+0x14]
        sub ecx, eax
        mov byte ptr ds : [edx], al
        add dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], 0xF1
        jmp public_65dce07
        public_65dcda7 : nop
        jae public_65dce0e
        mov eax, dword ptr ss : [ebp+0x14]
        lea esi, ds:[edx+eax]
        lea eax, ds:[ebx+0xF8]
        cmp esi, eax
        ja public_65dce0e
        lea eax, ds:[ecx+edx]
        public_65dcdbc : nop
        cmp eax, esi
        jae public_65dcdca
        cmp byte ptr ds : [eax], 0
        jne public_65dcdc8
        inc eax
        jmp public_65dcdbc
        public_65dcdc8 : nop
        cmp eax, esi
        public_65dcdca : nop
        jne public_65dce0e
        mov al, byte ptr ss : [ebp+0x14]
        mov byte ptr ds : [edx], al
        mov eax, dword ptr ds : [ebx]
        cmp edx, eax
        ja public_65dce02
        cmp esi, eax
        jbe public_65dce02
        lea eax, ds:[ebx+0xF8]
        cmp esi, eax
        jae public_65dcdf9
        xor eax, eax
        mov dword ptr ds : [ebx], esi
        cmp byte ptr ds : [esi], al
        jne public_65dcdf4
        public_65dcded : nop
        inc eax
        cmp byte ptr ds : [esi+eax], 0
        je public_65dcded
        public_65dcdf4 : nop
        mov dword ptr ds : [ebx+4], eax
        jmp public_65dce02
        public_65dcdf9 : nop
        and dword ptr ds : [ebx+4], 0
        lea eax, ds:[ebx+8]
        mov dword ptr ds : [ebx], eax
        public_65dce02 : nop
        sub ecx, dword ptr ss : [ebp+0x14]
        add dword ptr ds : [edi], ecx
        public_65dce07 : nop
        mov dword ptr ss : [ebp-4], 1
        public_65dce0e : nop
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dcd6d)
    }
}

#undef public_65dcda7
#undef public_65dcdbc
#undef public_65dcdc8
#undef public_65dcdca
#undef public_65dcded
#undef public_65dcdf4
#undef public_65dcdf9
#undef public_65dce02
#undef public_65dce07
#undef public_65dce0e
