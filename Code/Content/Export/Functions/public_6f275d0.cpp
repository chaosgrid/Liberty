#include "Content-PCH.h"


#define public_6f275f6 _public_6f275f6
#define public_6f27615 _public_6f27615
#define public_6f27632 _public_6f27632

PROC_DECLARE(0x6f275d0, internal_6f275d0, public_6f275d0);
extern "C" NAKED register_t __cdecl internal_6f275d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6f275f6
        mov dword ptr ss : [ebp+0x128], ebx
        mov byte ptr ss : [ebp+0x12C], bl
        jmp public_6f27632
        public_6f275f6 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x12C]
        jb public_6f27615
        mov eax, 0x2F
        public_6f27615 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x128], eax
        pop edi
        public_6f27632 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        pop esi
        fstp dword ptr ss : [ebp+0x11C]
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f275d0)
    }
}

#undef public_6f275f6
#undef public_6f27615
#undef public_6f27632
