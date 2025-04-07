#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4021b0);

#define public_4021d7 _public_4021d7
#define public_402204 _public_402204
#define public_40221a _public_40221a
#define public_402226 _public_402226
#define public_402230 _public_402230
#define public_402239 _public_402239
#define public_402244 _public_402244
#define public_402253 _public_402253

PROC_DECLARE(0x4021b0, internal_4021b0, public_4021b0);
extern "C" NAKED register_t __cdecl internal_4021b0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        push edi
        push ebp
        lea esi, ds:[ecx+0x74C]
        call dword ptr ds : [public_41b8f4]
        mov edi, eax
        add esp, 4
        cmp edi, 0x7FFFFFFD
        jbe public_4021d7
        call dword ptr ds : [public_41b8a0]
        public_4021d7 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_402204
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_402204
        cmp cl, 0xFF
        je public_402204
        test edi, edi
        jne public_402230
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_402204 : nop
        test edi, edi
        jne public_40221a
        push 1
        mov ecx, esi
        call dword ptr ds : [public_41b86c]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_40221a : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_402226
        cmp eax, edi
        jae public_402239
        public_402226 : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_41b86c]
        public_402230 : nop
        mov ecx, esi
        push edi
        call dword ptr ds : [public_41b8a4]
        public_402239 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, ebp
        jbe public_402253
        mov edx, edi
        public_402244 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_402244
        public_402253 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax+edi*2], 0
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x4021b0)
    }
}

#undef public_4021d7
#undef public_402204
#undef public_40221a
#undef public_402226
#undef public_402230
#undef public_402239
#undef public_402244
#undef public_402253
