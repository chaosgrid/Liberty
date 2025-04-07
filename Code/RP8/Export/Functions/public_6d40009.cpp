#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40009);

#define public_6d40028 _public_6d40028
#define public_6d40036 _public_6d40036
#define public_6d4003d _public_6d4003d
#define public_6d40057 _public_6d40057
#define public_6d40076 _public_6d40076
#define public_6d40098 _public_6d40098
#define public_6d400aa _public_6d400aa
#define public_6d400ae _public_6d400ae

PROC_DECLARE(0x6d40009, internal_6d40009, public_6d40009);
extern "C" NAKED register_t __cdecl internal_6d40009()
{
    __asm
    {
        push ebx
        push ebp
        push edi
        mov edi, 0xCC
        xor ebx, ebx
        cmp dword ptr ds : [esi+0x10], edi
        je public_6d40028
        mov eax, dword ptr ds : [esi+0x17C]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x10], edi
        public_6d40028 : nop
        mov eax, dword ptr ds : [esi+0x17C]
        cmp byte ptr ds : [eax+8], bl
        je public_6d40098
        lea edi, ds:[esi+0x78]
        public_6d40036 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ds : [esi+0x60]
        jae public_6d40076
        public_6d4003d : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_6d40057
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x60]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+8]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d40057 : nop
        mov eax, dword ptr ds : [esi+0x180]
        mov ebp, dword ptr ds : [edi]
        push ebx
        push edi
        push ebx
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        add esp, 0x10
        cmp eax, ebp
        je public_6d400ae
        mov ecx, eax
        cmp ecx, dword ptr ds : [esi+0x60]
        jb public_6d4003d
        public_6d40076 : nop
        mov eax, dword ptr ds : [esi+0x17C]
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x17C]
        push esi
        call dword ptr ds : [eax]
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+0x17C]
        cmp byte ptr ds : [eax+8], bl
        pop ecx
        pop ecx
        jne public_6d40036
        public_6d40098 : nop
        xor eax, eax
        cmp byte ptr ds : [esi+0x41], bl
        setne al
        add eax, 0xCD
        mov dword ptr ds : [esi+0x10], eax
        mov al, 1
        public_6d400aa : nop
        pop edi
        pop ebp
        pop ebx
        ret 
        public_6d400ae : nop
        xor al, al
        jmp public_6d400aa
        UNREACHABLE_TRAP(0x6d40009)
    }
}

#undef public_6d40028
#undef public_6d40036
#undef public_6d4003d
#undef public_6d40057
#undef public_6d40076
#undef public_6d40098
#undef public_6d400aa
#undef public_6d400ae
