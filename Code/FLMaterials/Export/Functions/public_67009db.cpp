#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fcf30);
CLANG_FORWARD_PROC_SYMBOL(public_6700930);

#define public_67009f7 _public_67009f7
#define public_6700a01 _public_6700a01
#define public_6700a13 _public_6700a13
#define public_6700a1d _public_6700a1d
#define public_6700a1f _public_6700a1f
#define public_6700a23 _public_6700a23
#define public_6700a3f _public_6700a3f
#define public_6700a48 _public_6700a48
#define public_6700a57 _public_6700a57
#define public_6700a6e _public_6700a6e
#define public_6700a71 _public_6700a71

PROC_DECLARE(0x67009db, internal_67009db, public_67009db);
extern "C" NAKED register_t __cdecl internal_67009db()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_67009f7
        cmp dword ptr ds : [public_670465c], 0
        jmp public_6700a1d
        public_67009f7 : nop
        cmp esi, 1
        je public_6700a01
        cmp esi, 2
        jne public_6700a23
        public_6700a01 : nop
        mov eax, dword ptr ds : [public_670627c]
        test eax, eax
        je public_6700a13
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6700a1f
        public_6700a13 : nop
        push edi
        push esi
        push ebx
        call public_6700930
        test eax, eax
        public_6700a1d : nop
        jne public_6700a23
        public_6700a1f : nop
        xor eax, eax
        jmp public_6700a71
        public_6700a23 : nop
        push edi
        push esi
        push ebx
        call public_66fcf30
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6700a3f
        test eax, eax
        jne public_6700a6e
        push edi
        push eax
        push ebx
        call public_6700930
        public_6700a3f : nop
        test esi, esi
        je public_6700a48
        cmp esi, 3
        jne public_6700a6e
        public_6700a48 : nop
        push edi
        push esi
        push ebx
        call public_6700930
        test eax, eax
        jne public_6700a57
        and dword ptr ss : [ebp+0xC], eax
        public_6700a57 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6700a6e
        mov eax, dword ptr ds : [public_670627c]
        test eax, eax
        je public_6700a6e
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6700a6e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6700a71 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x67009db)
    }
}

#undef public_67009f7
#undef public_6700a01
#undef public_6700a13
#undef public_6700a1d
#undef public_6700a1f
#undef public_6700a23
#undef public_6700a3f
#undef public_6700a48
#undef public_6700a57
#undef public_6700a6e
#undef public_6700a71
