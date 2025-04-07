#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c2500);
CLANG_FORWARD_PROC_SYMBOL(public_65c2610);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c2591 _public_65c2591
#define public_65c25b4 _public_65c25b4
#define public_65c25b6 _public_65c25b6
#define public_65c25bf _public_65c25bf

PROC_DECLARE(0x65c2580, internal_65c2580, public_65c2580);
extern "C" NAKED register_t __cdecl internal_65c2580()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x88]
        test eax, eax
        jne public_65c2591
        xor al, al
        pop edi
        ret 
        public_65c2591 : nop
        mov eax, dword ptr ds : [edi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [public_65c7070]
        add eax, 8
        test ecx, ecx
        je public_65c25b4
        mov ecx, dword ptr ds : [eax+0x14]
        test ecx, ecx
        jne public_65c25b6
        mov ecx, edx
        jmp public_65c25b6
        public_65c25b4 : nop
        xor ecx, ecx
        public_65c25b6 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_65c25bf
        mov eax, edx
        public_65c25bf : nop
        push ebx
        push esi
        push ecx
        push eax
        mov ecx, edi
        call public_65c2610
        mov ecx, dword ptr ds : [edi+0x84]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+4]
        mov bl, al
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[esi+8]
        call public_65c2500
        push esi
        call public_65c6a60
        mov eax, dword ptr ds : [edi+0x88]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x88], eax
        pop esi
        mov al, bl
        pop ebx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x65c2580)
    }
}

#undef public_65c2591
#undef public_65c25b4
#undef public_65c25b6
#undef public_65c25bf
