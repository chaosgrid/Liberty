#include "THORN-PCH.h"


#define public_6f33b13 _public_6f33b13
#define public_6f33b15 _public_6f33b15
#define public_6f33b39 _public_6f33b39
#define public_6f33b3d _public_6f33b3d
#define public_6f33b42 _public_6f33b42
#define public_6f33b52 _public_6f33b52
#define public_6f33b68 _public_6f33b68
#define public_6f33b94 _public_6f33b94

PROC_DECLARE(0x6f33b00, internal_6f33b00, public_6f33b00);
extern "C" NAKED register_t __cdecl internal_6f33b00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5aa0c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f33b52
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33b13 : nop
        mov esi, ebp
        public_6f33b15 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f33b3d
        test cl, cl
        je public_6f33b39
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f33b3d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33b15
        public_6f33b39 : nop
        xor eax, eax
        jmp public_6f33b42
        public_6f33b3d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f33b42 : nop
        test eax, eax
        je public_6f33b68
        mov eax, dword ptr ds : [edi*8+public_6f5aa14]
        inc edi
        test eax, eax
        jne public_6f33b13
        public_6f33b52 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f33b68 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5aa10]
        test eax, eax
        jns public_6f33b94
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f33b94 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f33b00)
    }
}

#undef public_6f33b13
#undef public_6f33b15
#undef public_6f33b39
#undef public_6f33b3d
#undef public_6f33b42
#undef public_6f33b52
#undef public_6f33b68
#undef public_6f33b94
