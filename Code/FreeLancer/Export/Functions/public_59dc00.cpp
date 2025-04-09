#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_59e810);

#define public_59dc0e _public_59dc0e
#define public_59dc26 _public_59dc26
#define public_59dc34 _public_59dc34
#define public_59dc42 _public_59dc42
#define public_59dc50 _public_59dc50
#define public_59dc5f _public_59dc5f
#define public_59dc75 _public_59dc75
#define public_59dc84 _public_59dc84
#define public_59dc90 _public_59dc90
#define public_59dc96 _public_59dc96
#define public_59dca0 _public_59dca0
#define public_59dcb1 _public_59dcb1

PROC_DECLARE(0x59dc00, internal_59dc00, public_59dc00);
extern "C" NAKED register_t __cdecl internal_59dc00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [edx+0x6C]
        test al, 4
        je public_59dc0e
        mov al, 1
        ret 
        public_59dc0e : nop
        or al, 4
        push ebx
        mov byte ptr ds : [edx+0x6C], al
        mov eax, dword ptr ds : [public_67dcdc]
        xor ebx, ebx
        cmp eax, edx
        push esi
        jne public_59dc26
        mov dword ptr ds : [public_67dcdc], ebx
        public_59dc26 : nop
        cmp dword ptr ds : [public_67dce0], edx
        jne public_59dc34
        mov dword ptr ds : [public_67dce0], ebx
        public_59dc34 : nop
        cmp dword ptr ds : [public_67dcd8], edx
        jne public_59dc42
        mov dword ptr ds : [public_67dcd8], ebx
        public_59dc42 : nop
        mov esi, dword ptr ds : [public_67dbe8]
        xor al, al
        cmp esi, ebx
        je public_59dcb1
        mov edi, edi
        public_59dc50 : nop
        cmp dword ptr ds : [esi+8], edx
        je public_59dc5f
        mov esi, dword ptr ds : [esi+4]
        cmp esi, ebx
        jne public_59dc50
        pop esi
        pop ebx
        ret 
        public_59dc5f : nop
        cmp dword ptr ds : [esi+8], ebx
        je public_59dcb1
        push edi
        mov edi, dword ptr ds : [edx+4]
        cmp edi, ebx
        je public_59dca0
        mov eax, dword ptr ds : [edi+0xC]
        xor ecx, ecx
        cmp eax, ebx
        je public_59dc96
        public_59dc75 : nop
        cmp eax, edx
        je public_59dc84
        mov ecx, eax
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        jne public_59dc75
        jmp public_59dc96
        public_59dc84 : nop
        cmp ecx, ebx
        je public_59dc90
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_59dc96
        public_59dc90 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+0xC], ecx
        public_59dc96 : nop
        mov dword ptr ds : [edx+4], ebx
        lea esp, ss:[esp]
        public_59dca0 : nop
        push esi
        mov ecx, offset public_67dbd8
        call public_59e810
        mov dword ptr ds : [esi+8], ebx
        mov al, 1
        pop edi
        public_59dcb1 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x59dc00)
    }
}

#undef public_59dc0e
#undef public_59dc26
#undef public_59dc34
#undef public_59dc42
#undef public_59dc50
#undef public_59dc5f
#undef public_59dc75
#undef public_59dc84
#undef public_59dc90
#undef public_59dc96
#undef public_59dca0
#undef public_59dcb1
