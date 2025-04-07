#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279020);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627902f _public_627902f
#define public_62790e0 _public_62790e0
#define public_62790ec _public_62790ec
#define public_62790f8 _public_62790f8
#define public_6279106 _public_6279106

PROC_DECLARE(0x6279020, internal_6279020, public_6279020);
extern "C" NAKED register_t __cdecl internal_6279020()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        xor edx, edx
        public_627902f : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], edx
        je public_62790ec
        mov eax, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 2
        cmp edx, eax
        jae public_62790ec
        mov esi, dword ptr ds : [esi+edx*4]
        cmp esi, ebx
        je public_62790e0
        push esi
        call public_6334430
        lea edi, ds:[esi+0x38]
        push edi
        call public_6334430
        lea ebp, ds:[esi+0x3C]
        push ebp
        call public_6334430
        lea eax, ds:[esi+4]
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [esi+0x34], bl
        mov byte ptr ds : [esi+0x35], bl
        mov dword ptr ds : [edi], ebx
        mov dword ptr ss : [ebp], ebx
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x28], 0
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x2C], 0
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        push esi
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x28], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov dword ptr ds : [eax+0x20], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0x10
        public_62790e0 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+edx*4], ebx
        inc edx
        jmp public_627902f
        public_62790ec : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, esi
        cmp eax, esi
        je public_6279106
        public_62790f8 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, esi
        jne public_62790f8
        public_6279106 : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6279020)
    }
}

#undef public_627902f
#undef public_62790e0
#undef public_62790ec
#undef public_62790f8
#undef public_6279106
