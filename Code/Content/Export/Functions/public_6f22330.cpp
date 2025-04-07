#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22330);

#define public_6f22348 _public_6f22348
#define public_6f22356 _public_6f22356
#define public_6f2236e _public_6f2236e
#define public_6f22389 _public_6f22389
#define public_6f22398 _public_6f22398
#define public_6f223b0 _public_6f223b0
#define public_6f223d1 _public_6f223d1
#define public_6f223f6 _public_6f223f6

PROC_DECLARE(0x6f22330, internal_6f22330, public_6f22330);
extern "C" NAKED register_t __cdecl internal_6f22330()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        cmp edx, dword ptr ss : [esp+8]
        je public_6f223f6
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        xor ecx, ecx
        public_6f22348 : nop
        lea esi, ss:[ebp+4]
        cmp esi, ecx
        jne public_6f22356
        mov dword ptr ds : [edx], ecx
        mov byte ptr ds : [edx+4], cl
        jmp public_6f22389
        public_6f22356 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f2236e
        mov eax, 0x2F
        public_6f2236e : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[edx+4]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+edx+4], cl
        mov dword ptr ds : [edx], eax
        public_6f22389 : nop
        lea esi, ss:[ebp+0x38]
        cmp esi, ecx
        jne public_6f22398
        mov dword ptr ds : [edx+0x34], ecx
        mov byte ptr ds : [edx+0x38], cl
        jmp public_6f223d1
        public_6f22398 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f223b0
        mov eax, 0x2F
        public_6f223b0 : nop
        lea ebp, ds:[edx+0x38]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+ebp], cl
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+0x34], eax
        public_6f223d1 : nop
        mov eax, dword ptr ss : [ebp+0x68]
        mov dword ptr ds : [edx+0x68], eax
        mov eax, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [edx+0x6C], eax
        mov eax, dword ptr ss : [ebp+0x70]
        mov dword ptr ds : [edx+0x70], eax
        mov eax, dword ptr ss : [esp+0x18]
        add edx, 0x74
        cmp edx, eax
        jne public_6f22348
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f223f6 : nop
        ret 
        UNREACHABLE_TRAP(0x6f22330)
    }
}

#undef public_6f22348
#undef public_6f22356
#undef public_6f2236e
#undef public_6f22389
#undef public_6f22398
#undef public_6f223b0
#undef public_6f223d1
#undef public_6f223f6
