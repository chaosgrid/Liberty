#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6278d30);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6278d41 _public_6278d41
#define public_6278de0 _public_6278de0
#define public_6278dec _public_6278dec
#define public_6278df8 _public_6278df8
#define public_6278e06 _public_6278e06

PROC_DECLARE(0x6278d30, internal_6278d30, public_6278d30);
extern "C" NAKED register_t __cdecl internal_6278d30()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov edx, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x10], edx
        xor ebp, ebp
        public_6278d41 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, ebx
        je public_6278dec
        mov eax, dword ptr ds : [edx+8]
        sub eax, ecx
        sar eax, 2
        cmp ebp, eax
        jae public_6278dec
        mov esi, dword ptr ds : [ecx+ebp*4]
        cmp esi, ebx
        je public_6278de0
        push esi
        call public_6334430
        lea edi, ds:[esi+0x40]
        push edi
        call public_6334430
        lea eax, ds:[esi+4]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [edi], ebx
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x28], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov dword ptr ds : [eax+0x20], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        or eax, 0xFFFFFFFF
        push esi
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov byte ptr ds : [esi+0x3C], bl
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        public_6278de0 : nop
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+ebp*4], ebx
        inc ebp
        jmp public_6278d41
        public_6278dec : nop
        mov esi, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, esi
        cmp eax, esi
        je public_6278e06
        public_6278df8 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, esi
        jne public_6278df8
        public_6278e06 : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6278d30)
    }
}

#undef public_6278d41
#undef public_6278de0
#undef public_6278dec
#undef public_6278df8
#undef public_6278e06
