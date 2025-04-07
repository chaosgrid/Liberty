#include "Shading-PCH.h"


#define public_6eb39d3 _public_6eb39d3
#define public_6eb39d5 _public_6eb39d5
#define public_6eb39f9 _public_6eb39f9
#define public_6eb39fd _public_6eb39fd
#define public_6eb3a02 _public_6eb3a02
#define public_6eb3a12 _public_6eb3a12
#define public_6eb3a28 _public_6eb3a28
#define public_6eb3a57 _public_6eb3a57

PROC_DECLARE(0x6eb39c0, internal_6eb39c0, public_6eb39c0);
extern "C" NAKED register_t __cdecl internal_6eb39c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed1288]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6eb3a12
        mov ebp, dword ptr ss : [esp+0x18]
        public_6eb39d3 : nop
        mov esi, ebp
        public_6eb39d5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6eb39fd
        test cl, cl
        je public_6eb39f9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6eb39fd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6eb39d5
        public_6eb39f9 : nop
        xor eax, eax
        jmp public_6eb3a02
        public_6eb39fd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb3a02 : nop
        test eax, eax
        je public_6eb3a28
        mov eax, dword ptr ds : [edi*8+public_6ed1290]
        inc edi
        test eax, eax
        jne public_6eb39d3
        public_6eb3a12 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6eb3a28 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed128c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6eb3a57
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6eb3a57 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb39c0)
    }
}

#undef public_6eb39d3
#undef public_6eb39d5
#undef public_6eb39f9
#undef public_6eb39fd
#undef public_6eb3a02
#undef public_6eb3a12
#undef public_6eb3a28
#undef public_6eb3a57
