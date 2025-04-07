#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd66f);
CLANG_FORWARD_PROC_SYMBOL(public_65ddd4b);

#define public_65ddd69 _public_65ddd69
#define public_65ddd76 _public_65ddd76
#define public_65ddd86 _public_65ddd86
#define public_65ddd97 _public_65ddd97
#define public_65ddd9a _public_65ddd9a
#define public_65ddd9d _public_65ddd9d
#define public_65ddda3 _public_65ddda3

PROC_DECLARE(0x65ddd4b, internal_65ddd4b, public_65ddd4b);
extern "C" NAKED register_t __cdecl internal_65ddd4b()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp ebx, 0xFFFFFFFF
        push esi
        je public_65ddd97
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0xC]
        test al, 1
        jne public_65ddd69
        test al, 0x80
        je public_65ddd97
        test al, 2
        jne public_65ddd97
        public_65ddd69 : nop
        cmp dword ptr ds : [esi+8], 0
        jne public_65ddd76
        push esi
        call public_65dd66f
        pop ecx
        public_65ddd76 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, dword ptr ds : [esi+8]
        jne public_65ddd86
        cmp dword ptr ds : [esi+4], 0
        jne public_65ddd97
        inc eax
        mov dword ptr ds : [esi], eax
        public_65ddd86 : nop
        test byte ptr ds : [esi+0xC], 0x40
        je public_65ddd9d
        dec dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax], bl
        je public_65ddda3
        inc eax
        mov dword ptr ds : [esi], eax
        public_65ddd97 : nop
        or eax, 0xFFFFFFFF
        public_65ddd9a : nop
        pop esi
        pop ebx
        ret 
        public_65ddd9d : nop
        dec dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi]
        mov byte ptr ds : [eax], bl
        public_65ddda3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        inc dword ptr ds : [esi+4]
        and al, 0xEF
        or al, 1
        mov dword ptr ds : [esi+0xC], eax
        mov eax, ebx
        and eax, 0xFF
        jmp public_65ddd9a
        UNREACHABLE_TRAP(0x65ddd4b)
    }
}

#undef public_65ddd69
#undef public_65ddd76
#undef public_65ddd86
#undef public_65ddd97
#undef public_65ddd9a
#undef public_65ddd9d
#undef public_65ddda3
